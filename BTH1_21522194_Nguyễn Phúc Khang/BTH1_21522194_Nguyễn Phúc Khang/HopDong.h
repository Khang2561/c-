#pragma once
#include<iostream>
#include"CanBo.h"
using namespace std;
class NhaNuoc :private CanBo {
private:
	long LCB;
	int HeSo;
	int HeSoPhuCap;
public:
	void Nhap();
	long TinhLuong(long &);
	void Xuat();
};