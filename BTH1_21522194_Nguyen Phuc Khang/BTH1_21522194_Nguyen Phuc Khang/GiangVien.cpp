#include "GiangVien.h"
#include<string>
using namespace std;
void GiangVien::Nhap()
{
	DH::Nhap();
	cout << "\nNhap vao hoc ham: "; cin.ignore(); getline(cin, HocHam);
	cout << "\nNhap vao hoc vi: "; cin.ignore(); getline(cin, HocVi);
	cout << "\nNhap vao so nam giang day: "; cin >> SND;
	cout << "\nNhap vao so mon giang day: "; cin >> SoMon;
	for (int i = 0; i < SoMon; i++) {
		cout << "\nNhap vao mon thu " << i<<":";
		cin.ignore();
		getline(cin, Mon[i]);
	}
	DH::Luong = ((float)SoMon * (float)SND * 0.12) * 20000;
}

void GiangVien::Xuat()
{
	DH::Xuat();
	cout << "\nHoc ham : " << HocHam;
	cout << "\nHoc Vi: " << HocVi;
	cout << "\nDanh sach mon :";
	for (int i = 0; i < SoMon; i++) {
		cout << "\nMon thu nhat: " << Mon[i];
	}
	cout << "\nLuong: " << DH::Luong;

}
