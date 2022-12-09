#include "DH.h"

void DH::Nhap()
{
	cout << "\nNhap vao MS cua nhan vien do : "; cin >> MS;
	cout << "\nNhap vao ho va ten cua nhan vien : "; cin.ignore(); getline(cin, HoTen);
	cout << "\nNhap vao ngay / thang / nam sinh : "; cin >> ngay >> thang >> nam;

}

void DH::Xuat() {
	cout << "\nMa so cua nhan vien: " << MS;
	cout << "\nHo va ten nhan vien do : " << HoTen;
	cout << "\nSinh vao : " << ngay << "/" << thang << "/" << nam;
}