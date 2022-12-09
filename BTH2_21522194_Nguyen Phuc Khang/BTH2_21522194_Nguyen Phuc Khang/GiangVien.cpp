#include "GiangVien.h"

void GiangVien::Nhap()
{
	DH::Nhap();
	cout << "\nNhap vao so tiet giang day trong nam : "; cin >> ST;
	cout << "\nNhap vao so de tai huong dan tot nghiep : "; cin >> SoDTKL;
}

void GiangVien::Xuat() {
	DH::Xuat();
	cout << "\nSo tiet giang day trong nam : " << ST;
	cout << "\nSo du an huong dan tot nghiep : " << SoDTKL;
}

bool GiangVien::TienTien()
{
	if (ST >= 300 && SoDTKL >= 5) {
		return true;
	}
	return false;
}
