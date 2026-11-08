#pragma once
#include "Vehicle.h"
#include<vector>
#include<string>
class Bill
{
private:
string maHoaDon;
string ngayLap;
vector<Vehicle*> danhSachXe;
double tongTien;
public:
Bill();
Bill(string& maHoadon,string& ngayLap,double tongTien);
~Bill();
Bill& operator=(const Bill& other);
string getmaHoaDon()const;
string getngayLap()const;
vector<Vehicle*> void getdanhSachXe()const;
double gettongTien()const;
void themXe(Vehicle* xe);
double tinhTongTien()const;
void inHoaDon()const;
Bill operator+(const &other::Bill);


