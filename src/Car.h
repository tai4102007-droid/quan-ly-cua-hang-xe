#include<Vehicle.h>
class Car:public Vehicle
{
   int soChoNgoi;
    string kieuHopSo;
public:
Car(const std::string& maXe, const std::string& tenXe,
                 const std::string& hangSanXuat, int namSanXuat,
                 double giaBan, int soLuongTon,int socho,string& hopso)
~Car() override;
void hienThiThongTin() const override;
double tinhPhiBaoTri() const override;
};
