#include <iostream>
#include "NgayThangNam.h"
using namespace std;

//Constructor mac dinh
//Input:khong co
//Output:khoi tao ngay = 01/01/2000
//Thuat toan:gan gia tri mac dinh cho iNgay, iThang, iNam
NgayThangNam::NgayThangNam() {
    iNgay = 1;
    iThang = 1;
    iNam = 2000;
}

//Constructor co tham so
//Input:ngay, thang, nam
//Output:khoi tao doi tuong voi gia tri duoc truyen vao
//Thuat toan:gan truc tiep cac gia tri cho thuoc tinh
NgayThangNam::NgayThangNam(int ngay, int thang, int nam) {
    iNgay = ngay;
    iThang = thang;
    iNam = nam;
}

//Ham nhap du lieu ngay thang nam
//Input:nguoi dung nhap tu ban phim (ngay, thang, nam)
//Output:gan gia tri hop le cho iNgay, iThang, iNam
//Thuat toan:
//-Nhap ngay, thang, nam
//-Kiem tra hop le bang KiemTraHopLe()
//-Neu sai thi nhap lai
void NgayThangNam::Nhap() {
    do {
        cout << "Nhap ngay: ";
        cin >> iNgay;
        cout << "Nhap thang: ";
        cin >> iThang;
        cout << "Nhap nam: ";
        cin >> iNam;

        if (!KiemTraHopLe()) {
            cout << "Ngay thang nam khong hop le! Nhap lai.\n";
        }
    } while (!KiemTraHopLe());
}

//Ham xuat du lieu
//Input:du lieu trong doi tuong
//Output:in ra man hinh dang ngay/thang/nam
//Thuat toan:in lan luot iNgay, iThang, iNam
void NgayThangNam::Xuat() const {
    cout << iNgay << "/" << iThang << "/" << iNam;
}

//Ham kiem tra nam nhuan
//Input:iNam
//Output:true neu la nam nhuan, false neu khong
//Thuat toan:
//-Neu nam chia het cho 400 -> nhuan
//-Hoac chia het cho 4 nhung khong chia het cho 100 -> nhuan
bool NgayThangNam::LaNamNhuan() {
    return (iNam % 400 == 0 || (iNam % 4 == 0 && iNam % 100 != 0));
}

//Ham so ngay trong thang
//Input:iThang, iNam
//Output:so ngay cua thang tuong ung
//Thuat toan:
//-Dung switch-case xac dinh thang
//-Thang 2 kiem tra nam nhuan
int NgayThangNam::SoNgayTrongThang() {
    switch (iThang) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return LaNamNhuan() ? 29 : 28;
        default:
            return 0;
    }
}

//Ham kiem tra hop le
//Input:iNgay, iThang, iNam
//Output:true neu hop le, false neu sai
//Thuat toan:
//-Kiem tra nam > 0
//-Kiem tra thang tu 1 den 12
//-Kiem tra ngay nam trong so ngay cua thang
bool NgayThangNam::KiemTraHopLe() {
    if (iNam < 1) return false;
    if (iThang < 1 || iThang > 12) return false;
    if (iNgay < 1 || iNgay > SoNgayTrongThang()) return false;
    return true;
}

//Ham tinh ngay tiep theo
//Input:ngay hien tai
//Output:tra ve ngay ke tiep
//Thuat toan:
//-Tang ngay len 1
//-Neu vuot so ngay trong thang:
//  +gan ngay = 1, tang thang
//-Neu thang > 12:
//  +gan thang = 1, tang nam
NgayThangNam NgayThangNam::NgayThangNamTiepTheo() {
    NgayThangNam ngayMoi = *this;

    ngayMoi.iNgay++;

    if (ngayMoi.iNgay > ngayMoi.SoNgayTrongThang()) {
        ngayMoi.iNgay = 1;
        ngayMoi.iThang++;

        if (ngayMoi.iThang > 12) {
            ngayMoi.iThang = 1;
            ngayMoi.iNam++;
        }
    }

    return ngayMoi;
}
