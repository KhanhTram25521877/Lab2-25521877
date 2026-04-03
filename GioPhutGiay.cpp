#include <iostream>
#include "GioPhutGiay.h"
using namespace std;

//Constructor mac dinh
//Input:khong co
//Output:khoi tao gio = 0, phut = 0, giay = 0
//Thuat toan:gan gia tri mac dinh cho iGio, iPhut, iGiay
GioPhutGiay::GioPhutGiay() {
    iGio = 0;
    iPhut = 0;
    iGiay = 0;
}

//Constructor co tham so
//Input:gio, phut, giay
//Output:khoi tao doi tuong voi gia tri duoc truyen vao
//Thuat toan:gan truc tiep cac gia tri cho thuoc tinh
GioPhutGiay::GioPhutGiay(int gio, int phut, int giay) {
    iGio = gio;
    iPhut = phut;
    iGiay = giay;
}

//Ham kiem tra hop le
//Input:iGio, iPhut, iGiay
//Output:true neu hop le, false neu sai
//Thuat toan:
//-Kiem tra gio tu 0 den <24
//-Kiem tra phut tu 0 den <60
//-Kiem tra giay tu 0 den <60
bool GioPhutGiay::KiemTraHopLe() {
    if (iGio < 0 || iGio >= 24) return false;
    if (iPhut < 0 || iPhut >= 60) return false;
    if (iGiay < 0 || iGiay >= 60) return false;
    return true;
}

//Ham nhap du lieu
//Input:nguoi dung nhap tu ban phim (gio, phut, giay)
//Output:gan gia tri hop le cho iGio, iPhut, iGiay
//Thuat toan:
//-Nhap gio, phut, giay
//-Kiem tra hop le bang KiemTraHopLe()
//-Neu sai thi nhap lai
void GioPhutGiay::Nhap() {
    do {
        cout << "Nhap gio: ";
        cin >> iGio;
        cout << "Nhap phut: ";
        cin >> iPhut;
        cout << "Nhap giay: ";
        cin >> iGiay;

        if (!KiemTraHopLe()) {
            cout << "Thoi gian khong hop le! Nhap lai.\n";
        }
    } while (!KiemTraHopLe());
}

//Ham xuat du lieu
//Input:du lieu trong doi tuong
//Output:in ra man hinh dang gio:phut:giay
//Thuat toan:in lan luot iGio, iPhut, iGiay
void GioPhutGiay::Xuat() const {
    cout << iGio << ":" << iPhut << ":" << iGiay;
}

//Ham cong them 1 giay
//Input:thoi gian hien tai
//Output:tra ve thoi gian sau khi cong 1 giay
//Thuat toan:
//-Tang giay len 1
//-Neu giay >= 60:
//  +gan giay = 0, tang phut
//-Neu phut >= 60:
//  +gan phut = 0, tang gio
//-Neu gio >= 24:
//  +gan gio = 0
GioPhutGiay GioPhutGiay::TinhCongThemMotGiay() {
    GioPhutGiay tg = *this;

    tg.iGiay++;

    if (tg.iGiay >= 60) {
        tg.iGiay = 0;
        tg.iPhut++;

        if (tg.iPhut >= 60) {
            tg.iPhut = 0;
            tg.iGio++;

            if (tg.iGio >= 24) {
                tg.iGio = 0;
            }
        }
    }

    return tg;
}
