#pragma once
#include<iostream>
#include<string>
using namespace std;
class CanBo {
protected:
	string MS;
	string HoTen;
	int ngay, thang, nam;
	long Luong;
public:
	void Nhap();
	virtual long TinhLuong(long&) = 0;
	void Xuat();
};