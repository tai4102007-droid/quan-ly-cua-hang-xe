<<<<<<< HEAD
#pragma once
#include <string>
#include "Vehicle.h"

class Truck : public Vehicle {
private:
    double taiTrong;
    int soBanhXe;

public:
    Truck(const std::string& maXe, const std::string& tenXe,
          const std::string& hangSanXuat, int namSanXuat,
          double giaBan, int soLuongTon,
          double taiTrong, int soBanhXe);

    double getTaiTrong() const;
    int getSoBanhXe() const;

    std::string getLoaiXe() const override;
    double tinhPhiBaoTri() const override;
    void hienThiThongTin() const override;
};
=======
# pragma once
# include "Vehicle.h"
#include <string.h>
class Truck:public Vehicle
{
    private:
    double taiTrong;
    int soBanhXe;
    public:
    Truck(const std::string& maXe, const std::string& tenXe,
            const std::string& hangSanXuat, int namSanXuat,
            double giaBan, int soLuongTon, double taiTrong, int soBanhXe){}
    double getTaiTrong()const;
    int getsoBanhXe()const;
    void hienThiThongTin() const override;
    double tinhPhiBaoTri() const override;
    std::string getLoaiXe() const override;
    
}
>>>>>>> c7e65ac (A1)
