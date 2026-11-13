#include"Customer.h"
#include<iostream>
#include<string>
Customer::Customer() {}
Customer::Customer(const std::string & ma, const std::string& ten, const std::string& sdt, const std::string& dc)
: maKH(ma), hoTen(ten), diaChi(dc){ setSoDienThoai(sdt);}
std::string Customer::getMaKH() const 
{
    return maKH;
}
std::string Customer::getHoTen() const
{
    return hoTen;
}
std::string Customer::getSoDienThoai() const
{
    return soDienThoai;
}
std::string Customer::getDiaChi() const
{
    return diaChi;
}
bool Customer::setSoDienThoai(const std::string& sdt)
{
    if(sdt.empty())
    {
        return false;
    }
    for(char c:sdt)
    {
        if(c<'0'||c>'9')
        {
            return false;
        }
    }
    soDienThoai = sdt;
    return true;
}
void Customer::hienThiThongTin() const
{
    std::cout <<"Ma khach hang: "<< maKH << "|" << "Ho va ten: " << hoTen 
    << "|"<< "So dien thoai: " << soDienThoai << "|" << "Dia chi: " << diaChi << "\n";
}
bool Customer::operator==( const Customer & other) const 
{
    return maKH == other.maKH;
}
