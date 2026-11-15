#pragma once
#include <iostream>
#include<string>
class Vehicle {
protected:
    std::string maXe;
    std::string tenXe;
    std::string hangSanXuat;
    int namSanXuat;
    double giaBan;
    int soLuongTon;

public:
    Vehicle(const std::string& maXe, const std::string& tenXe,
            const std::string& hangSanXuat, int namSanXuat,
            double giaBan, int soLuongTon);
    virtual ~Vehicle();

    std::string getmaXe() const;
    std::string gettenXe() const;
    std::string gethangSanXuat() const;
    int getnamSanXuat() const;
    int getsoLuongTon() const;
    double getGiaBan() const;
    virtual std::string getLoaiXe() const;

    virtual void hienThiThongTin() const ;   
    virtual double tinhPhiBaoTri() const = 0;   

    bool operator>(const Vehicle& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Vehicle& xe);
};
