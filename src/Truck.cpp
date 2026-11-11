#include "Truck.h"
class Truck:public Vehicle
{ 
    private:
    double taiTrong;
    int soBanhXe;
    public:
    Truck(const std::string& maXe, const std::string& tenXe,
            const std::string& hangSanXuat, int namSanXuat,
            double giaBan, int soLuongTon, double taiTrong, int soBanhXe):Vehicle(maXe, tenXe, hangSanXuat, namSanXuat, giaBan, soLuongTon),taiTrong(taiTrong),soBAnhXe(soBAnhXe){}
            ~Truck(){}
            double getTaiTrong()const
            {
                return taiTrong;
            }
            int getsoBanhXe()const
            {
                return soBanhXe;
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
                std::cout<<"tai trong:"<<taiTrong<<std::endl;
                std::cout<<"so banh xe:"<<soBanhXe<<std::endl;
            }
            double tinhPhiBaoTri() const override
            {
                return 0.03*giaBan+100000*taiTrong;
            }
            std::string getLoaiXe() const override
            {
                return "Xe tai";
            }
            
}