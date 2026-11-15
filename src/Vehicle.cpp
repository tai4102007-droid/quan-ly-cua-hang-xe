#include "Vehicle.h"

Vehicle::Vehicle(const std::string& maXe, const std::string& tenXe,
                 const std::string& hangSanXuat, int namSanXuat,
                 double giaBan, int soLuongTon)
    : maXe(maXe), tenXe(tenXe), hangSanXuat(hangSanXuat),
      namSanXuat(namSanXuat), giaBan(giaBan), soLuongTon(soLuongTon) {}

Vehicle::~Vehicle() {}

std::string Vehicle::getmaXe() const 
{ 
    return maXe; 
}
std::string Vehicle::gettenXe() const 
{ 
    return tenXe; 
}
std::string Vehicle::gethangSanXuat() const 
{ 
    return hangSanXuat; 
}
int Vehicle::getnamSanXuat() const
{
    return namSanXuat; 
}
int Vehicle::getsoLuongTon() const
{
    return soLuongTon; 
}
double Vehicle::getgiaBan() const 
{
     return giaBan; 
}
std::string Vehicle::getloaiXe() const 
{ 
    return "Xe"; 
}

bool Vehicle::operator>(const Vehicle& other) const 
{
    return giaBan > other.giaBan;
}

std::ostream& operator<<(std::ostream& os, const Vehicle& xe) {
    os << xe.maXe << " | " << xe.tenXe << " | " << xe.hangSanXuat << " | "
       << xe.namSanXuat << " | " << xe.giaBan << " | ton: " << xe.soLuongTon;
    return os;
}
void Vehicle::hienThongTin() const
{
    std::cout<<"ma xe:"<<getmaXe()<<std::endl;
    std::cout<<"ten xe:"<<gettenXe()<<std::endl;
    std::cout<<"hang san xuat:"<<gethangSanXuat()<<std::endl;
    std::cout<<"nam san xuat:"<<getnamSanXuat()<<std::endl;
    std::cout<<"gia ban:"<<getgiaBan()<<std::endl;
    std::cout<<"so luong ton:"<<getsoLuongTon()<<std::endl;
}
