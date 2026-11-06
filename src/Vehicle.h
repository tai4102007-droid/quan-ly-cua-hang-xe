#pragma once
#include <iostream>
#include <string>

// Lop truu tuong: cha cua Car, Motorbike, Truck
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

    std::string getMaXe() const;
    double getGiaBan() const;
    virtual std::string getLoaiXe() const;

    virtual void hienThiThongTin() const = 0;   // ham thuan ao
    virtual double tinhPhiBaoTri() const = 0;   // ham thuan ao

    bool operator>(const Vehicle& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Vehicle& xe);
};