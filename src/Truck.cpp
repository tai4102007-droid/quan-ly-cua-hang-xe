#include "Truck.h"

   Truck:: Truck(const std::string& maXe, const std::string& tenXe,
            const std::string& hangSanXuat, int namSanXuat,
            double giaBan, int soLuongTon, double taiTrong, int soBanhXe):Vehicle(maXe, tenXe, hangSanXuat, namSanXuat, giaBan, soLuongTon),taiTrong(taiTrong),soBAnhXe(soBAnhXe){}
            Truck::~Truck(){}
            double getTaiTrong()const
            {
                return taiTrong;
            }
            int getsoBanhXe()const
            {
                return soBanhXe;
            }
            double tinhPhiBaoTri() const 
            {
                return 0.03*giaBan+100000*taiTrong;
            }
            std::string getLoaiXe() const 
            {
                return "Xe tai";
            }
            void Truck :: hienThiThongTin() const 
            {
                Vehicle::hienThiThongTin();                
                std::cout<<"tai trong:"<<taiTrong<<std::endl;
                std::cout<<"so banh xe:"<<soBanhXe<<std::endl;
            }
            
