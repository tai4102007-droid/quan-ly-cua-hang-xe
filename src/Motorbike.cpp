#include "Motorbike.h"

Motorbike::Motorbike(const std::string& maXe, const std::string& tenXe,
              const std::string& hangSanXuat, int namSanXuat,
              double giaBan, int soLuongTon,
              int phanKhoi, const std::string& loaiXeMay):Vehicle(maXe, tenXe, hangSanXuat, namSanXuat, giaBan, soLuongTon), phanKhoi(phanKhoi), loaiXeMay(loaiXeMay) {}
 Motorbike::~Motorbike(){}
  int getphanKhoi()const
  { 
    return phanKhoi;
  }            
  string getloaiXeMay()const
  {
    return loaiXeMay;
  }
  std::string getLoaiXe() const 
  {
    return "Xe may";
  }
  double tinhPhiBaoTri() const 
  {
    if(phanKhoi < 150)
    {
        return 0.01*getGiaBan();
    }
    else 
    {
        return 0.01*getGiaBan() + 200000;
    }
  }
  void hienThiThongTin() const
  {
                Vehicle::hienThiThongTin();   
                std::cout<<"phan khoi:"<<getphanKhoi()<<std::endl;
                std::cout<<"loai xe may:"<<getloaiXeMay() <<std::endl;
  }