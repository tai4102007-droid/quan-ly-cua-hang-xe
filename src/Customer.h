#pragma once
#include <string>

class Customer {
private:
    std::string maKH;
    std::string hoTen;
    std::string soDienThoai;
    std::string diaChi;

public:
    // Constructor mac dinh va day du tham so
    Customer();
    Customer(const std::string& maKH, const std::string& hoTen,
             const std::string& soDienThoai, const std::string& diaChi);

    // Getter (can cho Shop khi ghi file)
    std::string getMaKH() const;
    std::string getHoTen() const;
    std::string getSoDienThoai() const;
    std::string getDiaChi() const;

    // Chi nhan chu so; tra false (khong doi gia tri) neu sai
    bool setSoDienThoai(const std::string& sdt);

    // In thong tin khach tren mot dong
    void hienThiThongTin() const;

    // Hai khach la mot neu cung maKH
    bool operator==(const Customer& other) const;
};
