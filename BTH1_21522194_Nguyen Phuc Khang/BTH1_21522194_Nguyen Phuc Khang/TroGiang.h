#pragma once
#pragma once
#include<iostream>
#include"DaiHoc.h"
using namespace std;
class TroGiang :private DH {
private:
	int SoMon;
	string* Mon = new string[100];
public:
	void Nhap();
	void Xuat();
};