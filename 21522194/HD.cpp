#include "HD.h"

void HD::Nhap()
{
    CanBo::Nhap();
    cout << "\nPhong ban: "; getline(cin, PhongBan);
        cout << "\nChuc vu : "; 
        cout << "\n(1) Nhan vien: ";
        cout << "\n(2)Pho Phong: ";
        cout << "\n(3)Truong Phong: ";
        cin >> ChucVu;
        cout << "\nNhap vao hs: "; cin >> HS;
        cout << "\nNhap vao so ngay cong : "; cin >> SNC;
        
    
}

void HD::Xuat()
{
    CanBo::Xuat();
    cout << "\nPhong ban : " << PhongBan;
    cout << "\nChuc vu : ";
    if (ChucVu == 1) {
        cout << "\nNhap vien ";
    }
    if (ChucVu == 2) {
        cout << "\nPho phong ";

    }
    if (ChucVu == 3) {
        cout << "\nTruong Phong ";
    }
    cout << "\nHe So : ";
    cout << "\nSo ngay lam: ";
}

void HD::setChucVu(long chucvu)
{
    ChucVu = chucvu;
}

void HD::setPhongBan(string phongban)
{
}

void HD::setHS(long hs)
{
    HS = hs;

}


void HD::setSNC(long snc)
{
    SNC = snc;
}

string HD::getPhongBan()
{
    return PhongBan;
}

long HD::getChucVu()
{
    return ChucVu;
}

long HD::getHS()
{
    return HS;
}

long HD::getSNC()
{
    return SNC;
}
