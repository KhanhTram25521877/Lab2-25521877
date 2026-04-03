#include <iostream>
#include "PhanSo.h"
using namespace std;

//Ham tim UCLN
//Input:a, b
//Output:tra ve uoc chung lon nhat
//Thuat toan:su dung de quy Euclid
int UCLN(int a, int b)
{
    if (b == 0) return a;
    return UCLN(b, a % b);
}

//Ham nhap du lieu
//Input:nguoi dung nhap tu va mau
//Output:gan gia tri cho iTu, iMau
//Thuat toan:
//-Nhap tu
//-Nhap mau (khac 0)
//-Neu mau = 0 thi nhap lai
void PhanSo::Nhap()
{
    cout << "Nhap tu: ";
    cin >> iTu;
    do {
        cout << "Nhap mau (khac 0): ";
        cin >> iMau;
    } while (iMau == 0);
}

//Ham xuat du lieu
//Input:du lieu trong doi tuong
//Output:in ra dang phan so
//Thuat toan:
//-Neu tu = 0 thi in 0
//-Neu mau = 1 thi in tu
//-Nguoc lai in tu/mau
void PhanSo::Xuat()
{
    if (iTu == 0){
        cout << 0;
    }
    else if (iMau == 1){
        cout << iTu;
    }
    else{
        cout << iTu << "/" << iMau;
    }
}

//Ham rut gon phan so
//Input:iTu, iMau
//Output:phan so da rut gon
//Thuat toan:
//-Tim UCLN cua |tu| va |mau|
//-Chia tu va mau cho UCLN
//-Neu mau < 0 thi doi dau
void PhanSo::RutGon()
{
    int ucln = UCLN(abs(iTu), abs(iMau));
    iTu /= ucln;
    iMau /= ucln;

    if (iMau < 0){
        iTu = -iTu;
        iMau = -iMau;
    }
}

//Ham tinh tong
//Input:phan so ps
//Output:tra ve tong hai phan so
//Thuat toan:
//-Quy dong mau
//-Cong tu
//-Rut gon ket qua
PhanSo PhanSo::Tong(PhanSo ps)
{
    PhanSo kq;
    kq.iTu = iTu * ps.iMau + ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

//Ham tinh hieu
//Input:phan so ps
//Output:tra ve hieu hai phan so
//Thuat toan:
//-Quy dong mau
//-Tru tu
//-Rut gon ket qua
PhanSo PhanSo::Hieu(PhanSo ps)
{
    PhanSo kq;
    kq.iTu = iTu * ps.iMau - ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

//Ham tinh tich
//Input:phan so ps
//Output:tra ve tich hai phan so
//Thuat toan:
//-Nhan tu voi tu
//-Nhan mau voi mau
//-Rut gon ket qua
PhanSo PhanSo::Tich(PhanSo ps)
{
    PhanSo kq;
    kq.iTu = iTu * ps.iTu;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

//Ham tinh thuong
//Input:phan so ps
//Output:tra ve thuong hai phan so
//Thuat toan:
//-Nhan voi nghich dao cua ps
//-Rut gon ket qua
PhanSo PhanSo::Thuong(PhanSo ps)
{
    PhanSo kq;
    kq.iTu = iTu * ps.iMau;
    kq.iMau = iMau * ps.iTu;
    kq.RutGon();
    return kq;
}

//Ham so sanh
//Input:phan so ps
//Output:1 neu >, 0 neu =, -1 neu <
//Thuat toan:
//-So sanh cheo tu*mau
int PhanSo::SoSanh(PhanSo ps)
{
    int left = iTu * ps.iMau;
    int right = ps.iTu * iMau;

    if (left > right) return 1;
    if (left == right) return 0;
    return -1;
}
