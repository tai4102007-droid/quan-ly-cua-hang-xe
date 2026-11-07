#include "Vehicle.h"

Vehicle::Vehicle(const std::string& maXe, const std::string& tenXe,
                 const std::string& hangSanXuat, int namSanXuat,
                 double giaBan, int soLuongTon)
    : maXe(maXe), tenXe(tenXe), hangSanXuat(hangSanXuat),
      namSanXuat(namSanXuat), giaBan(giaBan), soLuongTon(soLuongTon) {}

Vehicle::~Vehicle() {}

std::string Vehicle::getMaXe() const 
{ 
  return maXe;
}
double Vehicle::getGiaBan() const
{ 
  return giaBan;
}
std::string Vehicle::getLoaiXe() const 
{ 
  return "Xe";
}

bool Vehicle::operator>(const Vehicle& other) const
{
    return giaBan > other.giaBan;
}
std::ostream& operator<<(std::ostream& os, const Vehicle& xe) {
    os << xe.getMaXe() << " | " << xe.tenXe << " | " << xe.hangSanXuat << " | "
       << xe.namSanXuat << " | " << xe.giaBan << " | ton: " << xe.soLuongTon<<endl;
    return os;
}
