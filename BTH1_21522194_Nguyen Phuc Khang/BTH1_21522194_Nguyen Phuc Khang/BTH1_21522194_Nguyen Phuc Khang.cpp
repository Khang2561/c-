// BTH1_21522194_Nguyen Phuc Khang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include"ChuyenVien.h"
#include"DaiHoc.h"
#include"GiangVien.h"
#include"NguyenCuuVien.h"
#include"NguyenCuuVien.h"
#include "TroGiang.h"
using namespace std;
int main()
{
	vector<GiangVien*> A;
	vector<TroGiang*> B;
	vector<NghienCuuVien*>C;
	vector<ChuyenVien*>D;

	int nv = 0;int z=0;
	cout << "\nNhap vao so nhan vien: "; cin >> nv;
	for (int i = 0; i < nv; i++) {
		cout << "\nNhap thong tin nhan vien thu " << i;
		cout << "\nNhap (1) neu la giang vien: ";
		cout << "\nNhap (2) neu la tro giang: ";
		cout << "\nNhap (3) neu la nghien cuu vien: ";
		cout << "\nNhap (4) neu la chuyen vien: ";
		
		cin >> z;
		while (z < 1 && z>4) {
			cout << "\nNhap lai khong hop le: "; cin >> z;
		}
		if (z == 1) {
			GiangVien* p = new GiangVien;
			p->Nhap();
			A.push_back(p);
		}
		else if (z == 2) {
			TroGiang* p = new TroGiang;
			p->Nhap();
			B.push_back(p);
		}
		else if (z == 3) {
			NghienCuuVien* p = new NghienCuuVien;
			p->Nhap();
			C.push_back(p);
		}
		else {
			ChuyenVien* p = new ChuyenVien;
			p->Nhap();
			D.push_back(p);
		}
	}
	cout << "\n=============================================\n";
	cout << "\nXuat danh sach giang vien: ";
	for (short i = 0; i < A.size(); i++) {
		 A[i]->Xuat();
	}
	cout << "\n=============================================\n";
	cout << "\nXuat danh sach tro giang: ";
	for (short i = 0; i < A.size(); i++) {
		B[i] ->Xuat();
	}
	cout << "\n=============================================\n";
	cout << "\nXuat danh sach nghien cuu vien: ";
	for (short i = 0; i < C.size(); i++) {
		C[i] ->Xuat();
	}
	cout << "\n=============================================\n";
	cout << "\nXuat danh sach chuyen vien: ";
	for (short i = 0; i < C.size(); i++) {
		D[i] ->Xuat();
	}


	return 0;
}

