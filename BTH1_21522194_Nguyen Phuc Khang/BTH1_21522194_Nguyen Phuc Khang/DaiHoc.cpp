#include "DaiHoc.h"
using namespace std;
#include<string>
void DH::Nhap()
{
	cout << "\nNhap vao ten cua nhan vien "; cin.ignore(); getline(cin,name);
	cout << "\nNhap vao ngay / thang / nam sinh: "; cin >> ngay >> thang >> nam;
	cout << "\nNhap vao ma so nhan su: "; cin >> MS;
}

void DH::Xuat()
{
	cout << "\nHo va ten: " << name;
	cout << "\nSinh ngay " << ngay << " thang " << nam << " nam ";
	cout << "\nMS: " << MS;

}
