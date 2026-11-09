#pragma once
#include <iostream>
#include <string>

class Customer {
private:
    std::string maKH;
    std::string hoTen;
    std::string soDienThoai;
    std::string diaChi;

public:
    Customer();
    Customer(const std::string& maKH, const std::string& hoTen,
             const std::string& soDienThoai, const std::string& diaChi);

    std::string getMaKH() const;
    std::string getHoTen() const;
    std::string getSoDienThoai() const;
    std::string getDiaChi() const;
    void setHoTen(const std::string& hoTen);
    void setSoDienThoai(const std::string& soDienThoai);
    void setDiaChi(const std::string& diaChi);

    void hienThiThongTin() const;
    bool operator==(const Customer& other) const;
};
