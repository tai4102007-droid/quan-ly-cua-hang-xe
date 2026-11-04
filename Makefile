CXX      := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -MMD -MP -Isrc
SAN      := -fsanitize=address,undefined

SRC     := $(filter-out src/Main.cpp,$(wildcard src/*.cpp))
OBJ     := $(SRC:src/%.cpp=build/%.o)
TESTS   := $(wildcard tests/test_*.cpp)
TESTBIN := $(TESTS:tests/%.cpp=build/%)

all: build/cuahang

build/cuahang: $(OBJ) build/Main.o
	$(CXX) $(CXXFLAGS) $^ -o $@

build/%.o: src/%.cpp | build
	$(CXX) $(CXXFLAGS) -c $< -o $@

build/test_%: tests/test_%.cpp $(SRC) $(wildcard src/*.h) | build
	$(CXX) $(CXXFLAGS) $(SAN) tests/test_$*.cpp $(SRC) -o $@

build:
	mkdir -p build

test: $(TESTBIN)
	@for t in $(TESTBIN); do echo "== $$t"; ./$$t || exit 1; done

check-headers:
	@for h in src/*.h; do echo "#include \"$$(basename $$h)\"" | $(CXX) -std=c++17 -fsyntax-only -x c++ -Isrc - || exit 1; done; echo "headers OK"

clean:
	rm -rf build

-include build/*.d