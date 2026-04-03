#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main() {
    SoPhuc a, b; //tao 2 doi tuong so phuc

    cout << "Nhap so phuc a\n";
    a.Nhap(); //goi ham nhap so phuc a

    cout << "Nhap so phuc b\n";
    b.Nhap(); //goi ham nhap so phuc b

    cout << "\nSo phuc a: ";
    a.Xuat(); //xuat so phuc a

    cout << "\nSo phuc b: ";
    b.Xuat(); //xuat so phuc b

    SoPhuc tong = a.TinhTong(b);   //tinh tong 2 so phuc
    SoPhuc hieu = a.TinhHieu(b);   //tinh hieu 2 so phuc
    SoPhuc tich = a.TinhTich(b);   //tinh tich 2 so phuc
    SoPhuc thuong = a.TinhThuong(b); //tinh thuong 2 so phuc

    cout << "\n\nTong: ";
    tong.Xuat(); //xuat tong

    cout << "\nHieu: ";
    hieu.Xuat(); //xuat hieu

    cout << "\nTich: ";
    tich.Xuat(); //xuat tich

    cout << "\nThuong: ";
    thuong.Xuat(); //xuat thuong

    return 0; //ket thuc chuong trinh
}
