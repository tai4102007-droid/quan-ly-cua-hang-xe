#pragma once
#include "Vehicle.h"
#include<vector>
class Bill
{
private:
string maHoaDon;
string ngayLap;
vector<Vehicle*> danhSachXe;
double tongTien;
public:
Bill(string& maHoadon,string& ngayLap,double tongTien);
void themXe(Vehicle* xe);
double tinhTongTien()const;
void inHoaDon()const;
Bill operator+(const &other::Bill);


