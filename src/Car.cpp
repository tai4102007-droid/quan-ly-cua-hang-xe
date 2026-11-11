#include "Car.h"

Car::Car(const std::string& maXe, const std::string& tenXe,
            const std::string& hangSanXuat, int namSanXuat,
            double giaBan, int soLuongTon, int soChoNgoi, const std::string& kieuHopSo):Vehicle(maXe, tenXe, hangSanXuat, namSanXuat, giaBan, soLuongTon), soChoNgoi(soChoNgoi), kieuHopSo(kieuHopSo) {}
Car::~Car(){}
int Car::getSoChoNgoi()const
{
    return soChoNgoi;
}
string Car::getKieuHopSo()const
{
    return kieuHopSo;
} 
double Car::tinhPhiBaoTri() const override
{
    return 0.02 * giaBan;
}
string Car::getLoaiXe() const override
{
    return "Xe hoi";
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
                std::cout<<"so cho ngoi:"<<soChoNgoi<<std::endl;
                std::cout<<"kieu hop so:"<<kieuHopSo <<std::endl;
}          