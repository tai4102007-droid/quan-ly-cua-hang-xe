#pragma once
#include"Vehicle.h"
#include"Customer.h"
#include"Bill.h"
#include<string>
#include<vector>
#include<map>
class Shop{
private:
string tenCuaHang;
vector<Vehicle*>
vector<Customer>
vector<Bill>
public:
explicit Shop(const std::string& tenCuaHang = "Cua hang xe");
~Shop();
Shop& operator=(const Shop&) = delete;
Shop(const Shop&) = delete;
string getTenCuaHang()const;
bool themXe(Vehicle* xe);
bool suaXe(const string& maXe,Vehicle* xeMoi);
bool xoaXe(const string& maXe);
vector<Vehicle*> timKiemXe(const string& tukhoa)const;
vector<Vehicle*> timKiemTheoLoai(const string& loai)const;
void sapXepTheoGia(bool tangDan);
void sapXepTheoLoai();
Bill banXe(const string& maXe,Customer kh,int soLuong)const;
map<string,int> thongKeSoLuongBanTheoLoai()const;
vector<Vehicle*> top10XeGiaCaoNhat()const;
map<string,double> thongKeDoanhThuTheoThang()const;
void docFileDuLieu(const std::string& tenFile);
void ghiFileDuLieu(const std::string& tenFile) const;
};





