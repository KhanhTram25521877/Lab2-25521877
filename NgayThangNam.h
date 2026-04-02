#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H

//Lop bieu dien ngay thang nam
class NgayThangNam {
private:
    int iNgay;   //luu ngay
    int iThang;  //luu thang
    int iNam;    //luu nam

public:
    //Constructor mac dinh: gan gia tri ban dau
    NgayThangNam();

    //Constructor co tham so
    NgayThangNam(int ngay, int thang, int nam);

    //Nhap du lieu tu ban phim
    void Nhap();

    //Xuat du lieu ra man hinh
    void Xuat() const;

    //Tinh va tra ve ngay tiep theo
    NgayThangNam NgayThangNamTiepTheo();

    //Kiem tra ngay thang nam co hop le khong
    bool KiemTraHopLe();

    //Kiem tra co phai nam nhuan khong
    bool LaNamNhuan();

    //Tra ve so ngay trong thang hien tai
    int SoNgayTrongThang();
};

#endif //NGAYTHANGNAM_H
