#ifndef PHANSO_H
#define PHANSO_H

//Lop bieu dien phan so
class PhanSo {
private:
    int iTu;  //luu tu so
    int iMau; //luu mau so

public:
    //Nhap du lieu tu ban phim
    void Nhap();

    //Xuat du lieu ra man hinh
    void Xuat();

    //Rut gon phan so
    void RutGon();

    //Tinh tong hai phan so
    PhanSo Tong(PhanSo ps);

    //Tinh hieu hai phan so
    PhanSo Hieu(PhanSo ps);

    //Tinh tich hai phan so
    PhanSo Tich(PhanSo ps);

    //Tinh thuong hai phan so
    PhanSo Thuong(PhanSo ps);

    //So sanh hai phan so
    //Tra ve:1 neu >, 0 neu =, -1 neu <
    int SoSanh(PhanSo ps);
};

#endif//PHANSO_H
