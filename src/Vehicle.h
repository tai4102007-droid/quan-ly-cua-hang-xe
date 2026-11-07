#pragma once
#include <iostream>
#include <string>
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
    string getMaXe() const;
    double getGiaBan() const;
    virtual string getLoaiXe() const;
    virtual void hienThiThongTin() const = 0;   
    virtual double tinhPhiBaoTri() const = 0;   
    bool operator>(const Vehicle& other) const;
    friend ostream& operator<<(ostream& os, const Vehicle& xe);
};
