// BTH1_21522194_Nguyễn Phúc Khang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"CanBo.h"
#include"HopDong.h"
#include"NhanNuoc.h"
#include<vector>
using namespace std;
int main()
{
	vector<NhaNuoc*>a;
	vector<HopDong*>b;
	
	int scb = 0;
	cout << "\nNhap vao so can bo: "; cin >> scb;
	int tmp;
	long Tong = 0;
	for (int i = 0; i < scb; i++) {
		cout << "\nNhap thong tin can bo thu " << i;
		cout << "\nNhap vao (1) can bo nha nuoc: ";
		cout << "\nNhap vao (2) can bo hop dong: ";
		cout << "\nNhap vao (3) neu muon ket thuc phuong thuc nhap:";
		cin >> tmp;
		while (tmp < 1 && tmp>3) {
			cout << "\nNhap sai xin vui long nhap lai ";
			cout << "\nNhap vao (1) can bo nha nuoc: ";
			cout << "\nNhap vao (2) can bo hop dong: ";
			cout << "\nNhap vao (3) neu muon ket thuc phuong thuc nhap:";
			cin >> tmp;
		}
		if (tmp == 1) {
			NhaNuoc* p = new NhaNuoc;
			p->Nhap();
			a.push_back(p);
			p->TinhLuong(Tong);
		}

		if (tmp == 2) {
			HopDong* p = new HopDong;
			p->Nhap();
			b.push_back(p);
			p->TinhLuong(Tong);
		}
		 if(tmp==3) {
			break;
		}
		
	}
	cout << "\n===========================================================================\n";
	cout << "\nXuat danh sach can bo nha nuoc:  ";
	for (short i = 0; i < a.size(); i++) {
		a[i]->Xuat();
		
	}
cout << "\n***********************************************\n";
cout << "\nXuat danh sach nhan vien hop dong: ";
	for (short i = 0; i < b.size(); i++) {
		b[i]->Xuat();
		cout << "\n****************************\n";
	}
	cout << "\n***********************************************\n";
	cout << "\nTong luong cong ty abc phai tra: " << Tong;
	
   
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
