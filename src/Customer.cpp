#include "Customer.h"
#include <cctype>
#include <iostream>

Customer::Customer() {}

Customer::Customer(const std::string& maKH, const std::string& hoTen,
                   const std::string& soDienThoai, const std::string& diaChi)
    : maKH(maKH), hoTen(hoTen), diaChi(diaChi) {
    setSoDienThoai(soDienThoai);
}

std::string Customer::getMaKH() const { return maKH; }
std::string Customer::getHoTen() const { return hoTen; }
std::string Customer::getSoDienThoai() const { return soDienThoai; }
std::string Customer::getDiaChi() const { return diaChi; }

bool Customer::setSoDienThoai(const std::string& sdt) {
    if (sdt.empty()) return false;
    for (char c : sdt) {
        if (!std::isdigit(static_cast<unsigned char>(c))) return false;
    }
    soDienThoai = sdt;
    return true;
}

void Customer::hienThiThongTin() const {
    std::cout << maKH << " | " << hoTen << " | " << soDienThoai << " | " << diaChi << "\n";
}

bool Customer::operator==(const Customer& other) const {
    return maKH == other.maKH;
}
