#pragma once
#include <string>
#include "Vehicle.h"

class Motorbike : public Vehicle {
private:
    int phanKhoi;
    std::string loaiXeMay;

public:
    Motorbike(const std::string& maXe, const std::string& tenXe,
              const std::string& hangSanXuat, int namSanXuat,
              double giaBan, int soLuongTon,
              int phanKhoi, const std::string& loaiXeMay);

    int getPhanKhoi() const;
    std::string getLoaiXeMay() const;

    std::string getLoaiXe() const override;
    double tinhPhiBaoTri() const override;
    void hienThiThongTin() const override;
<<<<<<< HEAD
};
=======
};
>>>>>>> c7e65ac (A1)
