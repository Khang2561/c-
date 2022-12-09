#include "CanBo.h"

void CanBo::Nhap()
{
	cout << "\nNhap vao ten can bo: "; cin.ignore(); getline(cin, HoTen);
	cout << "\nNhap vao MS: "; cin >> MS;
	cout << "\nNhap vao ngay / thang /nam sinh: "; cin >> ngay >> thang >> nam;
}

void CanBo::Xuat()
{
	cout << "\nHo va ten : " << HoTen;
	cout << "\nMS : " << MS;
	cout << "\nNgay thang nam sinh : " << ngay << "/" << thang << "/" << nam;
}
