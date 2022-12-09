#include "TroGiang.h"

void TroGiang::Nhap()
{
	DH::Nhap();
	cout << "\nNhap vao so mon: "; cin >> SoMon;
	for (int i = 0; i < SoMon; i++) {
		cout << "\nNhap thong tin mon thu : "; cin.ignore(); getline(cin, Mon[i]);
	}
	DH::Luong = ((float)SoMon * 0.3) * 18000;
}

void TroGiang::Xuat() {
	DH::Xuat();
	cout << "\nSo mon: " << SoMon;
	cout << "\nDanh sach mon tro giang: ";
	for (int i = 0; i < SoMon; i++) {
		cout << "\nMon thu " << i << ": " << Mon[i];
	}
}
