#pragma once
#include <string>
#include <vector>
#include "Vehicle.h"
class Bill {
private:
    std::string maHoaDon;
    std::string ngayLap;
    std::vector<Vehicle*> danhSachXe;
    double tongTien;

public:
    Bill();
    Bill(const std::string& maHoaDon, const std::string& ngayLap);
    ~Bill();
    Bill(const Bill& other);
    Bill& operator=(const Bill& other);

    std::string getMaHoaDon() const;
    std::string getNgayLap() const;
    const std::vector<Vehicle*>& getDanhSachXe() const;
    double getTongTien() const;

    void themXe(Vehicle* xe);
    double tinhTongTien() const;
    void inHoaDon() const;
    Bill operator+(const Bill& other) const;
};
