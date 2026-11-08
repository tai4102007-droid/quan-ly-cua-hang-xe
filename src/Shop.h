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
Shop(const string& tenCuaHang="Cua Hang Xe");
~Shop();
Shop& operator=(const Shop&) = delete;
Shop(const Shop&) = delete;
string gettenCuaHang()const;
bool themXe(Vehicle* xe);
bool suaXe(const string& maXe,Vehicle* xeMoi);
bool xoaXe(const string& maXe);
vector<Vehicle*> timKiemXe(const string& tukhoa)const;
vetor<Vehicle*> timKiemTheoLoai(const string& loai)const;
void sapXepTheoLoai(bool tangDan);
void sapXepTheoLoai();
Bill banXe(const string& maXe,Customer kh,int soLuong);
map<string,int> thongKeSoLuongBanTheoLoai()const;
vector<Vehicle*> top10XeGiaCaoNhat()const;
map<string,double> thongKeDoanhThuTheoThang()const;
void docFileDuLieu<string C:|nhomOOP|quan-ly-cua-hang-xe|data|cuahang_xe.txt);
void docFileDuLieu<string C:|nhomOOP|quan-ly-cua-hang-xe|data|cuahang_khachhang.txt);
void docFileDuLieu<string C:|nhomOOP|quan-ly-cua-hang-xe|data|cuahang_hoadon.txt);
void ghiFileDuLieu<string C:|nhomOOP|quan-ly-cua-hang-xe|data|cuahang_xe.txt)const;
void ghiFileDuLieu<<string C:|nhomOOP|quan-ly-cua-hang-xe|data|cuahang_khachhang.txt)const;
void ghiFileDuLieu<<string C:|nhomOOP|quan-ly-cua-hang-xe|data|cuahang_hoadon.txt)const;






