#include "Motorbike.h"

Motorbike::Motorbike(const std::string& maXe, const std::string& tenXe,
              const std::string& hangSanXuat, int namSanXuat,
              double giaBan, int soLuongTon,
              int phanKhoi, const std::string& loaiXeMay):Vehicle(maXe, tenXe, hangSanXuat, namSanXuat, giaBan, soLuongTon), phanKhoi(phanKhoi), loaiXeMay(loaiXeMay) {}
 Motorbike::~Motorbike(){}
  int getPhanKhoi()const
  { 
    return phanKhoi;
  }            
  string getLoaiXeMay()const
  {
    return LoaiXeMAy;
  }
  std::string getLoaiXe() const override
  {
    return "Xe may";
  }
  double tinhPhiBaoTri() const override
  {
    if(phanKhoi < 150)
    {
        return 0.01*giaBan;
    }
    else 
    {
        return 0.01*giaBan+200000;
    }
  }
  void hienThiThongTin() const override
  {
                std::cout<<"loai xe:"<<getLoaiXe()<<std::endl;
                std::cout<<"ma xe:"<<maXe<<std::endl;
                std::cout<<"ten xe:"<<tenxe<<std::endl;
                std::cout<<"hang san xuat:"<<hangSAnXuat<<std::endl;
                std::cout<<"nam san xuat:"<<namSanXuat<<std::endl;
                std:: cout<<"gia ban:"<<giaban<<std::endl;
                std::cout<<"so luong ton:"<<soluongton<<std::endl;
                std::cout<<"phan khoi:"<<phanKhoi<<std::endl;
                std::cout<<"loai xe may:"<<loaiXeMay <<std::endl;

  }