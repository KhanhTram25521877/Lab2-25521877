#include <iostream>
#include "PhanSo.h"
using namespace std;

int main()
{
    PhanSo a, b; //tao 2 doi tuong phan so

    cout << "Nhap phan so A:\n";
    a.Nhap(); //nhap phan so a

    cout << "Nhap phan so B:\n";
    b.Nhap(); //nhap phan so b

    cout << "\nPhan so A: ";
    a.RutGon(); //rut gon phan so a
    a.Xuat();   //xuat phan so a

    cout << "\nPhan so B: ";
    b.RutGon(); //rut gon phan so b
    b.Xuat();   //xuat phan so b

    //Tinh toan
    PhanSo tong = a.Tong(b);   //tinh tong
    PhanSo hieu = a.Hieu(b);   //tinh hieu
    PhanSo tich = a.Tich(b);   //tinh tich
    PhanSo thuong = a.Thuong(b); //tinh thuong

    cout << "\n\nTong: ";
    tong.Xuat(); //xuat tong

    cout << "\n\nHieu: ";
    hieu.Xuat(); //xuat hieu

    cout << "\n\nTich: ";
    tich.Xuat(); //xuat tich

    cout << "\n\nThuong: ";
    thuong.Xuat(); //xuat thuong

    //So sanh
    int cmp = a.SoSanh(b); //so sanh a va b
    if (cmp == 1)
        cout << "\nA > B";
    else if (cmp == 0)
        cout << "\nA = B";
    else
        cout << "\nA < B";

    return 0; //ket thuc chuong trinh
}
