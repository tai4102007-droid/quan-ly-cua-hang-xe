#include<Vehicle.h>
class Motorbike:public vehicle
{
int phanKhoi;
string loaiXeMay;
public:
Motorbike(const std::string& maXe, const std::string& tenXe,
                 const std::string& hangSanXuat, int namSanXuat,
                 double giaBan, int soLuongTon,int phanKhoi,string& loaiXeMay)
~Motorbike() override;
void hienThiThongTin()const override;
void tinhPhiBaoTri()const override;
};
