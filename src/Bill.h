#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Vehicle.h"
class Bill
{
private:
    std::string maHoaDon;
    std::string ngayLap;
    std::vector<Vehicle*> danhSachXe;
    double tongTien;
    void xoaDanhSach();
    void saoChepDanhSach( const Bill& other);
public:
    Bill();
    Bill( const std::string& maHoaDon, const std::string& ngayLap);
    ~Bill();
    Bill(const Bill& other);
    Bill& operator=(const Bill& other);
    std::string getMaHoaDon() const;
    std::string getNgayLap() const;
    double getTongTien() const;
    const std::vector<Vehicle*>& getDanhSachXe() const;
    void themXe( const Vehicle* xe);
    double tinhTongTien();
    void inHoaDon() const;
    Bill operator+(const Bill& other) const;
};

