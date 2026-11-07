#include<Vehicle.h>
class Truck:public Vehicle
{
double taiTrong;
int soBanhXe;
public:
Truck(const std::string& maXe, const std::string& tenXe,
                 const std::string& hangSanXuat, int namSanXuat,
                 double giaBan, int soLuongTon, double taiTrong, int soBanhXe);
~Truck() override;
void hienThiThongTin()const override;
double tinhPhiBaoTri()const override;
};
