#pragma once
#include<iostream>
#include<string>
#include<istream>
#include<ostream>
#include<vector>
using namespace std;
class CanBo{
protected:
	string MS;
	string Name;
	long Luong;
public:
	void setMS(string ms1);
	void setName(string ten1);
	void setLuong(long t1);
	string getMS();
	string getName();
	long getLuong();
	~CanBo();
	CanBo();
	CanBo(string ms1, string ten);
	
	void Nhap();
	void Xuat();
};