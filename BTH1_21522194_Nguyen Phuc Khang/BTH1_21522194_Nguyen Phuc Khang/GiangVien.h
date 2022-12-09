#pragma once
#include<iostream>
#include"DaiHoc.h"
using namespace std;
class GiangVien:private DH {
private:
	string HocHam;
	string HocVi;
	int SND;
	int SoMon;
	string* Mon = new string[100];
public:
	void Nhap();
	void Xuat();
};