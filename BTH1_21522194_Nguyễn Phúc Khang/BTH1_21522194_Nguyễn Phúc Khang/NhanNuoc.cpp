#include "NhanNuoc.h"

void HopDong::Nhap()
{
	CanBo::Nhap();
	cout << "\nNhap vao Tien cong: "; cin >> TienCong;
	cout << "\nNhap vao he so lam vuot gio: "; cin >> HeSo;
	cout << "\nNhap vao so ngay cong: "; cin >> SoNgay;
}

long HopDong::TinhLuong(long&Tong)
{
	CanBo::Luong = TienCong * SoNgay * HeSo;
	Tong += CanBo::Luong;
	return CanBo::Luong;
}

void HopDong::Xuat()
{
	CanBo::Xuat();
	cout << "\n Tien cong : " << TienCong;
	cout << "\nHe so : " << HeSo;
	cout << "\nSo ngay lam : " << SoNgay;
	cout << "\nLuong : " << CanBo::Luong;
}
