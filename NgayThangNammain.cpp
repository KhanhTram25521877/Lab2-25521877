#include <iostream>
#include "NgayThangNam.h"
using namespace std;

int main() {
    NgayThangNam ngay; //tao doi tuong ngay thang nam

    cout << "Hay nhap ngay thang nam\n";
    ngay.Nhap(); //goi ham nhap du lieu

    NgayThangNam ngayTiepTheo = ngay.NgayThangNamTiepTheo(); //tinh ngay tiep theo

    cout << "\nNgay tiep theo: ";
    ngayTiepTheo.Xuat(); //xuat ket qua ngay tiep theo

    return 0; //ket thuc chuong trinh
}
