
#include<iostream>
#include<string>
#include<vector>
#include "Shop.h"

int main()
{
    Shop s;
    int choice;

    do
    {
        std::cout << "\n             QUAN LY CUA HANG BAN XE             \n";
        std::cout << "1. Them xe\n";
        std::cout << "2. Sua xe\n";
        std::cout << "3. Xoa xe\n";
        std::cout << "4. Tim kiem xe\n";
        std::cout << "5. Tim kiem theo loai\n";
        std::cout << "6. Sap xep theo gia\n";
        std::cout << "7. Sap xep theo loai\n";
        std::cout << "8. Ban xe\n";
        std::cout << "9. Thong ke so luong ban theo loai\n";
        std::cout << "10. Thong ke doanh thu theo thang\n";
        std::cout << "11. Top 10 xe gia cao nhat\n";
        std::cout << "12. Set chinh sach giam gia\n";
        std::cout << "13. Doc file du lieu\n";
        std::cout << "14. Ghi file du lieu\n";
        std::cout << "0. Thoat\n";

        std::cout << "Nhap lua chon: ";
        std::cin >> choice;

        switch(choice)
        {
            case 0:
                break;

            case 1:
                s.themXe();
                break;

            case 2:
                s.suaXe();
                break;

            case 3:
                s.xoaXe();
                break;

            case 4:
                s.timKiemXe();
                break;

            case 5:
                s.timKiemTheoLoai();
                break;

            case 6:
                s.sapXepTheoGia();
                break;

            case 7:
                s.sapXepTheoLoai();
                break;

            case 8:
                s.banXe();
                break;

            case 9:
                s.thongKeSoLuongBanTheoLoai();
                break;

            case 10:
                s.thongKeDoanhThuTheoThang();
                break;

            case 11:
                s.top10XeGiaCaoNhat();
                break;

            case 12:
                s.setChinhSachGiam();
                break;

            case 13:
                s.docFileDuLieu();
                break;

            case 14:
                s.ghiFileDuLieu();
                break;

            default:
                std::cout << "Invalid option!\n";
                break;
        }

    } while(choice != 0);

    std::cout << "Thanks for visiting!\n";

    return 0;
}
