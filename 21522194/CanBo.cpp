#include "CanBo.h"
#include<string>
CanBo::CanBo(string ms1, string ten)
{
	MS = ms1;
	Name = ten;

}

void CanBo::setName(string ten1)
{
	Name = ten1;
}

void CanBo::setMS(string ms1) {
	MS = ms1;
}

void CanBo::setLuong(long t1) {
	Luong = t1;
}

string CanBo::getMS() {
	return MS;
}

string CanBo::getName() {
	return Name;
}

long CanBo::getLuong() {
	return Luong;
}

CanBo::~CanBo()
{
}

CanBo::CanBo() {
	MS = "";
	Name = "";
}

void CanBo::Nhap()
{
	cout << "\nNhap vao ms cua can bo : "; cin >> MS;
	cout << "\nNhap vao ten cua can bo : "; getline(cin, Name);
	
}

void CanBo::Xuat()
{
	cout << "\nMa so cua can bo : " << MS;
	cout << "\nTen cua can bo : " << Name;
	cout << "\nLuong: " << Luong;
}
