#pragma once
#include <string>
#include <vector>
#include "Vehicle.h"
#include "Bill.h"

class FileManager {
public:
    static std::vector<Vehicle*> docDanhSachXe(const std::string& tenFile);
    static void ghiDanhSachXe(const std::string& tenFile, const std::vector<Vehicle*>& ds);
    static std::vector<Bill> docHoaDon(const std::string& tenFile);
    static void ghiHoaDon(const std::string& tenFile, const std::vector<Bill>& ds);
};
