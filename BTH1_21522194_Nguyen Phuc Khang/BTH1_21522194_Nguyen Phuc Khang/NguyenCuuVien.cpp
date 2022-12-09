#include "NguyenCuuVien.h"

void NghienCuuVien::Nhap()
{
	DH::Nhap();
	cout << "\nNhap vao so nam nghien cuu: "; cin >> SNL;
	cout << "\nSo du an dang tham gia: "; cin >> SDA;
	int dem=0;
	for (int i = 0; i < SDA; i++) {
		cout << "\nNhap vao du an thu " << i << ": "; cin.ignore(); getline(cin, DA[i]);
		if (DA[i][1] == 'D') {
			dem++;
		}
	}
	DH::Luong = ((float)(SNL) * 2 + (float)dem) * 20000;
}

void NghienCuuVien::Xuat()
{
	DH::Xuat();
	cout << "\nSon nam nghien cuu: " << SNL;
	cout << "\nSo du an nghien cuu: " << SDA;
	cout << "\nDanh sach du an nghien cuu: ";
	for (int i = 0; i < SDA; i++) {
		cout << "\nDu an thu " << i << ": " << DA[i];

	}
	cout << "\nLuong : " << DH::Luong;
}
