#pragma once
#include<iostream>
using namespace std;
#include<string>
class DH {
protected:
	string name;
	int ngay, thang, nam;
	string MS;
	float Luong=0;
public:
	void Nhap();
	void Xuat();
};
