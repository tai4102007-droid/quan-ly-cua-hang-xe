#pragma once
#include<iostream>
#include<string>
class Customer
{
string maKH;
string hoTen;
string soDienThoai;
string diaChi;
public:
Customer(const string& maKH, const string& hoTen,const string& soDienThoai,const string& diaChi);
string getmaKh()const ;
string gethoTen()const;
string getsoDienThoai()const;
string getdiaChi()const;
void setmaKH(const string& maKH);
void sethoTen(const string& hoTen);
void setdiaChi(const string& diaChi);
void hienThiThongTin()const;
bool operator==(const Customer& other);

