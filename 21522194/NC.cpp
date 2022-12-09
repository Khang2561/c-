#include "NC.h"

void NC::Nhap()
{
    CanBo::Nhap();
    cout << "\nNhap vao khoa cua can bo : ";getline(cin,Khoa);
    cout << "\nNhap vao trinh do cua can bo : "; 
    cout << "\n(1) Cu nhan: ";
    cout << "\n(2)Thac si: ";
    cout << "\n(3)Tien si: ";
    cin>>TrinhDo;
    
    cout << "\nNhap vao he sos cua can bo: "; cin >> HS;
    cout << "\nNhap vao so tiet cua can bo : "; cin >> SoTiet;
}

void NC::Xuat()
{
    CanBo::Xuat();
    cout << "\nKhoa : " << Khoa;
    cout << "\nTrinh do : ";
    if (TrinhDo == 1) {
        cout << "\nCu nhan ";
    }
    if (TrinhDo == 2) {
        cout << "\nThac si";
    }
    if (TrinhDo == 3) {
        cout << "\nTien si";
    }
    cout << "\nHe so : " << HS;
    cout << "\nSo tiet : " << SoTiet;
}

void NC::setKhoa(string khoa)
{
    Khoa = khoa;
}

void NC::setTrinhDo(long TrinhDo1)
{
    TrinhDo = TrinhDo1;
}

void NC::setHS(long HS1)
{
    HS = HS1;
}

void NC::setSoTiet(long st)
{
    SoTiet = st;
}

string NC::getKhoa()
{
    return Khoa;
}

long NC::getTrinhDo()
{
    return TrinhDo;
}

long NC::getHS()
{
    return HS;
}

long NC::getSoTiet()
{
    return SoTiet;
}
