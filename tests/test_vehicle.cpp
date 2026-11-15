#include <iostream>
#include "Vehicle.h"

static int loi = 0;
#define KIEM_TRA(dieuKien) do { if (!(dieuKien)) { std::cout << "FAIL: " #dieuKien " (dong " << __LINE__ << ")\n"; ++loi; } } while (0)

// Vehicle la lop truu tuong nen can mot lop con chi dung de kiem thu
class XeThu : public Vehicle {
public:
    using Vehicle::Vehicle;
    void hienThiThongTin() const override { std::cout << *this << "\n"; }
    double tinhPhiBaoTri() const override { return giaBan * 0.01; }
};

int main() {
    XeThu a("X1", "Xe A", "Hang H", 2024, 500, 2);
    XeThu b("X2", "Xe B", "Hang H", 2023, 300, 1);

    KIEM_TRA(a.getMaXe() == "X1");
    KIEM_TRA(a.getGiaBan() == 500);
    KIEM_TRA(a.getLoaiXe() == "Xe");
    KIEM_TRA(a > b);
    KIEM_TRA(!(b > a));
    KIEM_TRA(a.tinhPhiBaoTri() == 5);

    a.hienThiThongTin();
    if (loi == 0) std::cout << "PASS\n";
    return loi == 0 ? 0 : 1;
}
