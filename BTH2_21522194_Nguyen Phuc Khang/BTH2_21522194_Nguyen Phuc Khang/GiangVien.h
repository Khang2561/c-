#pragma once
#include"DH.h"
#include<iostream>
#include<string>
using namespace std;
class GiangVien :private DH{
protected:
	int ST;// so tiet giang day trong nam
	int SoDTKL;// so de tai khoa luan ma giang vien do huong dan
public:
	void Nhap();
	void Xuat();
	bool TienTien();
};