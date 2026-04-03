#ifndef SOPHUC_H
#define SOPHUC_H

//Lop bieu dien so phuc
class SoPhuc {
private:
    double iThuc; //luu phan thuc
    double iAo;   //luu phan ao

public:
    //Constructor mac dinh
    SoPhuc();

    //Constructor co tham so
    SoPhuc(double thuc, double ao);

    //Nhap du lieu tu ban phim
    void Nhap();

    //Xuat du lieu ra man hinh
    void Xuat() const;

    //Tinh tong hai so phuc
    SoPhuc TinhTong(const SoPhuc &a);

    //Tinh hieu hai so phuc
    SoPhuc TinhHieu(const SoPhuc &a);

    //Tinh tich hai so phuc
    SoPhuc TinhTich(const SoPhuc &a);

    //Tinh thuong hai so phuc
    SoPhuc TinhThuong(const SoPhuc &a);
};

#endif//SOPHUC_H
