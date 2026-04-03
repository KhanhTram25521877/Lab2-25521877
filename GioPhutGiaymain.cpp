#include <iostream>
#include "GioPhutGiay.h"
using namespace std;

int main() {
    GioPhutGiay tg; //tao doi tuong gio phut giay

    cout << "Nhap gio phut giay\n";
    tg.Nhap(); //goi ham nhap du lieu

    GioPhutGiay tgMoi = tg.TinhCongThemMotGiay(); //tinh thoi gian sau khi cong 1 giay

    cout << "\nThoi gian sau khi cong 1 giay: ";
    tgMoi.Xuat(); //xuat ket qua

    return 0; //ket thuc chuong trinh
}
