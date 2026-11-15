#include"Bill.h"
#include<iostream>
#include<iomanip>
#include<cmath>
static std::string dinhDangTien(double soTien)
{
    bool laSoAm = false;
    if(soTien<0)
    {
        laSoAm = true;
        soTien = -soTien;
    }
    long long tien = (long long )(soTien + 0.5);
    std::string so = std::to_string(tien);
    std::string kq = "";
    int n = so.size();
    for(int i = 0; i < n; i++)
    {
        kq += so[i];
        int conlai = n -1 -i;
        if( conlai > 0 && conlai%3 == 0)
        {
            kq +='.';
        }
    }
    if (laSoAm) 
    {
        kq = "-" + kq;
    }
    return kq;
}
static Vehicle* saoChepXe(const Vehicle* xe)
{
    if(xe == nullptr )
    {
        return nullptr;
    }
    const Car* car= dynamic_cast<const Car*>(xe);
    if(car != nullptr)
    {
        return new Car(*car);
    }
    const Motorbike* moto = dynamic_cast<const Motorbike*>(xe);
    if(moto!=nullptr)
    {
        return new Motorbike(*moto);
    }
    const Truck* truck = dynamic_cast<const Truck*>(xe);
    if (truck != nullptr) 
    {
        return new Truck(*truck);
    }
    return nullptr;
}
void Bill::xoaDanhSach()
{
    for (Vehicle* xe : danhSachXe) 
    {
        delete xe;
    }
    danhSachXe.clear();
}
void Bill::saoChepDanhSach(const Bill& other)
{
    for (const Vehicle* xe : other.danhSachXe)
    {
        Vehicle* banSao = saoChepXe(xe);
        if (banSao != nullptr) 
        {
            danhSachXe.push_back(banSao);
        }
    }
}
Bill::Bill(): tongTien(0) {}
Bill::Bill(const std::string& ma, const std::string& ngay)
: maHoaDon(ma), ngayLap(ngay), tongTien{0} {}
Bill::~Bill()
{
    xoaDanhSach();
}
Bill::Bill(const Bill& other)
{
    maHoaDon = other.maHoaDon;
    ngayLap  = other.ngayLap;
    tongTien = other.tongTien;
    saoChepDanhSach(other);
}
Bill& Bill ::operator=(const Bill& other)
{
    if(this!= &other)
    {
        xoaDanhSach();
        maHoaDon = other.maHoaDon;
        ngayLap = other.ngayLap;
        tongTien = other.tongTien;
        saoChepDanhSach(other);
    }
    return *this;
}
std::string Bill::getMaHoaDon() const 
{ 
    return maHoaDon; 
}
std::string Bill::getNgayLap() const 
{ 
    return ngayLap; 
}
double Bill::getTongTien() const 
{ 
    return tongTien; 
}
const std::vector< Vehicle*>& Bill::getDanhSachXe() const 
{ 
    return danhSachXe; 
}
void Bill::themXe( const Vehicle* xe)
{
    Vehicle* banSao = saoChepXe(xe);
    if(banSao==nullptr)
    {
        return;
    }
    banSao->setSoLuongTon(1);
    danhSachXe.push_back(banSao);
    tongTien+=banSao->getGiaBan();   
}
double Bill::tinhTongTien()
{
    tongTien = 0;
    for (const Vehicle* xe : danhSachXe)
    {
        tongTien += xe->getGiaBan();
    }
    return tongTien;
}
void Bill::inHoaDon() const 
{
    std::cout << " HOA DON " << maHoaDon <<"\n";
    std::cout << "Ngay lap " << ngayLap<<"\n";
    std::cout << std::left << std::setw(4)<<"STT"<<"| Thong tin xe\n";
    int stt = 1;
    for(const Vehicle* xe :danhSachXe )
    {
        std::cout << std:: left << std::setw(4) << stt++ << "| "<< *xe << "\n";
    }
    std::cout << "Tong tien: " << dinhDangTien(tongTien) << " VND \n";
}
Bill Bill::operator+(const Bill& other) const
{
    Bill ketQua(maHoaDon, ngayLap);
    for (const Vehicle* xe : danhSachXe)
    {
        ketQua.themXe(xe);
    }
    for(const Vehicle* xe: other.danhSachXe)
    {
        ketQua.themXe(xe);
    }
    ketQua.tinhTongTien();
    return ketQua;
}
