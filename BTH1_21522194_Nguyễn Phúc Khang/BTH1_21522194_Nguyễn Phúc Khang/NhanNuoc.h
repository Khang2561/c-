#pragma once
#include<iostream>
#include"CanBo.h"
using namespace std;
class HopDong :private CanBo {
private:
	long TienCong;
	int HeSo;
	int SoNgay;
public:
	void Nhap();
	long TinhLuong(long&);
	void Xuat();
};