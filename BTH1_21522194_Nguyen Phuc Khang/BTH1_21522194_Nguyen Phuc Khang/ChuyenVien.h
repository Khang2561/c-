#pragma once
#pragma once
#pragma once
#include<iostream>
#include"DaiHoc.h"
using namespace std;
class ChuyenVien :private DH {
private:
	int SNL;
	int SDA;
	string* DA = new string[100];
public:
	void Nhap();
	void Xuat();
};