#pragma once
<<<<<<< HEAD
#include <string>
#include "Vehicle.h"

class Car : public Vehicle {
private:
    int soChoNgoi;
    std::string kieuHopSo;

public:
    Car(const std::string& maXe, const std::string& tenXe,
        const std::string& hangSanXuat, int namSanXuat,
        double giaBan, int soLuongTon,
        int soChoNgoi, const std::string& kieuHopSo);

    int getSoChoNgoi() const;
    std::string getKieuHopSo() const;

    std::string getLoaiXe() const override;
    double tinhPhiBaoTri() const override;
    void hienThiThongTin() const override;
};
=======
#include "Vehicle.h"
#include<string>
class Car:public Vehicle
{
    private:
    int soChoNgoi;
    string kieuHopSo;
    public:
    Car(const std::string& maXe, const std::string& tenXe,
            const std::string& hangSanXuat, int namSanXuat,
            double giaBan, int soLuongTon, int soChoNgoi, const std::string& kieuHopSo)
    int getSoChoNgoi()const;
    string getKieuHopSo()const;
    void hienThiThongTin() const override;
    double tinhPhiBaoTri() const override;
    std::string getLoaiXe() const override;
};
>>>>>>> c7e65ac (A1)
