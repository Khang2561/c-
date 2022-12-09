#include "HopDong.h"

void NhaNuoc::Nhap()
{
	CanBo::Nhap();
	cout << "\nNhap vao luong co ban :"; cin >> LCB;
	cout << "\nNhap vao he so: "; cin >> HeSo;
	cout << "\nNhap vao he so phu cap: "; cin >> HeSoPhuCap;

}

long NhaNuoc::TinhLuong(long& Tong)
{
	CanBo::Luong = LCB * (long)HeSo * (long)HeSoPhuCap;
	Tong += CanBo::Luong;
	return CanBo::Luong;
}

void NhaNuoc::Xuat()
{
	CanBo::Xuat();
	int z = 0;
	cout << "\nLuong co ban: " << LCB;
	cout << "\nHe so : " << HeSo;
	cout << "\nHe so phu cap : " << HeSoPhuCap;
	cout << "Luong : " << CanBo::Luong;
}
