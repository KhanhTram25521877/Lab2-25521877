#ifndef GIOPHUTGIAY_H
#define GIOPHUTGIAY_H

//Lop bieu dien gio phut giay
class GioPhutGiay {
private:
    int iGio;   //luu gio
    int iPhut;  //luu phut
    int iGiay;  //luu giay

public:
    //Constructor mac dinh
    GioPhutGiay();

    //Constructor co tham so
    GioPhutGiay(int gio, int phut, int giay);

    //Nhap du lieu tu ban phim
    void Nhap();

    //Xuat du lieu ra man hinh
    void Xuat() const;

    //Tinh va tra ve thoi gian sau khi cong them 1 giay
    GioPhutGiay TinhCongThemMotGiay();

    //Kiem tra thoi gian co hop le khong
    bool KiemTraHopLe();
};

#endif//GIOPHUTGIAY_H
