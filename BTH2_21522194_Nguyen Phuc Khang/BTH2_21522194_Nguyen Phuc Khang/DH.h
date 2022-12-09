#pragma once
#include<iostream>
#include<string>
using namespace std;
class DH {
protected:
	string MS;
	string HoTen;
	int ngay, thang, nam;
public:
	void Nhap();
	void Xuat();
	virtual bool TienTien() = 0;
};
