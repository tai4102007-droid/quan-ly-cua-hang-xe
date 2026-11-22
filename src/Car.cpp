#include "Car.h"

Car::Car(const std::string& maXe, const std::string& tenXe,
            const std::string& hangSanXuat, int namSanXuat,
            double giaBan, int soLuongTon, int soChoNgoi, const std::string& kieuHopSo):Vehicle(maXe, tenXe, hangSanXuat, namSanXuat, giaBan, soLuongTon), soChoNgoi(soChoNgoi), kieuHopSo(kieuHopSo) {}
Car::~Car(){}
int Car::getSoChoNgoi()const
{
    return soChoNgoi;
}
std::string Car::getKieuHopSo()const
{
    return kieuHopSo;
} 
double Car::tinhPhiBaoTri() const 
{
    return 0.02 * getGiaBan();
}
std::string Car::getLoaiXe() const 
{
    return "Xe hoi";
} 
void Car::hienThiThongTin() const
{
                Vehicle::hienThiThongTin();
                std::cout<<"so cho ngoi:"<<getSoChoNgoi()<<std::endl;
                std::cout<<"kieu hop so:"<<getKieuHopSo() <<std::endl;
}  
       
