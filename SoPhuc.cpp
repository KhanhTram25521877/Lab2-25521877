#include <iostream>
#include "SoPhuc.h"
using namespace std;

//Constructor mac dinh
//Input:khong co
//Output:khoi tao so phuc = 0 + 0i
//Thuat toan:gan iThuc = 0, iAo = 0
SoPhuc::SoPhuc() {
    iThuc = 0;
    iAo = 0;
}

//Constructor co tham so
//Input:thuc, ao
//Output:khoi tao so phuc voi gia tri duoc truyen vao
//Thuat toan:gan truc tiep iThuc, iAo
SoPhuc::SoPhuc(double thuc, double ao) {
    iThuc = thuc;
    iAo = ao;
}

//Ham nhap du lieu
//Input:nguoi dung nhap phan thuc va phan ao
//Output:gan gia tri cho iThuc, iAo
//Thuat toan:
//-Nhap phan thuc
//-Nhap phan ao
void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}

//Ham xuat du lieu
//Input:du lieu trong doi tuong
//Output:in ra dang a + bi hoac a - bi
//Thuat toan:
//-In phan thuc
//-Neu phan ao >= 0 thi in "+"
//-Nguoc lai in "-"
void SoPhuc::Xuat() const {
    cout << iThuc;
    if (iAo >= 0)
        cout << " + " << iAo << "i";
    else
        cout << " - " << -iAo << "i";
}

//Ham tinh tong
//Input:so phuc a
//Output:tra ve tong hai so phuc
//Thuat toan:
//-Cong phan thuc
//-Cong phan ao
SoPhuc SoPhuc::TinhTong(const SoPhuc &a) {
    return SoPhuc(iThuc + a.iThuc, iAo + a.iAo);
}

//Ham tinh hieu
//Input:so phuc a
//Output:tra ve hieu hai so phuc
//Thuat toan:
//-Tru phan thuc
//-Tru phan ao
SoPhuc SoPhuc::TinhHieu(const SoPhuc &a) {
    return SoPhuc(iThuc - a.iThuc, iAo - a.iAo);
}

//Ham tinh tich
//Input:so phuc a
//Output:tra ve tich hai so phuc
//Thuat toan:
//-Ap dung cong thuc (a+bi)(c+di)
//-thuc = ac - bd
//-ao = ad + bc
SoPhuc SoPhuc::TinhTich(const SoPhuc &a) {
    double thuc = iThuc * a.iThuc - iAo * a.iAo;
    double ao = iThuc * a.iAo + iAo * a.iThuc;
    return SoPhuc(thuc, ao);
}

//Ham tinh thuong
//Input:so phuc a
//Output:tra ve thuong hai so phuc
//Thuat toan:
//-Tinh mau = a^2 + b^2
//-Neu mau = 0 thi khong chia duoc
//-Ap dung cong thuc chia so phuc
SoPhuc SoPhuc::TinhThuong(const SoPhuc &a) {
    double mau = a.iThuc * a.iThuc + a.iAo * a.iAo;

    if (mau == 0) {
        cout << "\nKhong the chia cho so phuc 0!\n";
        return SoPhuc();
    }

    double thuc = (iThuc * a.iThuc + iAo * a.iAo) / mau;
    double ao = (iAo * a.iThuc - iThuc * a.iAo) / mau;

    return SoPhuc(thuc, ao);
}
