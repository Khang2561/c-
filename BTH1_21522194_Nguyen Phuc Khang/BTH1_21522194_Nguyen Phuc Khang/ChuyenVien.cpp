#include "ChuyenVien.h"

void ChuyenVien::Nhap()
{
	DH::Nhap();
	cout << "\nNhap vao so nam lam viec: "; cin >> SNL;
	cout << "\nNhap vao so du an: "; cin >> SDA;
	int dem = 0;
	cout << "\nNhap vao danh sach du an: ";
	for (int i = 0; i < SDA; i++) {
		cout << "\nNhap vao du an thu " << i << ": "; cin.ignore(); getline(cin, DA[i]);
		if (DA[i][1] == 'T') {
			dem++;
		}
	}
	DH::Luong = ((float)(SNL) * 4 + (float)(dem)) * 18000;
}

void ChuyenVien::Xuat()
{
	DH::Xuat();
	cout << "\nSo nam liem viec: " << SNL;
	cout << "\nSo du an: " << SDA;
	cout << "\nDanh sach du an da tham gia: ";
	for (int i = 0; i < SDA; i++) {
		cout << "\nDu an thu " << i << ": " << DA[i];

	}
	cout << "\nLuong : " << DH::Luong;
}
