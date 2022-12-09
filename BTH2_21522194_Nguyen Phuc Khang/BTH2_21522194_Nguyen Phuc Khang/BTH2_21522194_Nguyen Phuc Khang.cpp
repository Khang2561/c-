// BTH2_21522194_Nguyen Phuc Khang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<vector>
#include"DH.h"
#include"GiangVien.h"
#include"NghienCuuVien.h"
#include"VanPhong.h"
int main()
{
    int SNV;
    cout << "\nNhap vao so nhan vien cua truong dai hoc do : "; cin >> SNV;
    vector<GiangVien*>A;
    vector<NghienCuuVien*>B;
    vector<VanPhong*>C;
    while (SNV < 0) {
        cout << "\nNhap lai so nhan vien co trong truong dai hoc ";
    }
    for (int i = 1; i <= SNV; i++) {
        cout << "\nNhap thong tin nhan vien thu " << i << ": ";
        cout << "\nNhap vao (1) neu la giang vien ";
        cout << "\nNhap vao (2) neu la nghien cuu vien ";
        cout << "\nNhap vao (3) neu la nhan vien van phong ";
        int z;
        cout << "\nNhap : "; cin >> z;
        while (z < 1 && z>3) {
            cout << "\nNhap khong hop le ";
            cout << "\nNhap lai :"; cin >> z;
        }
        if (z == 1) {
            GiangVien* p = new GiangVien();
            p->Nhap();
            A.push_back(p);
        }
        else if(z == 2) {
            NghienCuuVien* p = new NghienCuuVien();
            p->Nhap();
            B.push_back(p);
        }
        else {
            VanPhong* p = new VanPhong();
            p->Nhap();
            C.push_back(p);
        }
    }
    cout << "\n=======================================================================================\n";
    cout << "\nDanh sach nhan vien tien tien : ";
    cout << "\nDanh sach giang vien tien tien : ";
    for (short i = 0; i < A.size(); i++) {
        if (A[i]->TienTien() == true) {
            A[i]->Xuat();
            cout << "\n";
        }
    }
    cout << "\n**************************************************************************************\n";
    cout << "\nDanh sach nghien cuu vien tien tien : ";
    for (short i = 0; i < B.size(); i++) {
        if (B[i]->TienTien() == true) {
            B[i]->Xuat();
            cout << "\n";
        }
    }
    cout << "\n**************************************************************************************\n";
    for (short i = 0; i < C.size(); i++) {
        if (C[i]->TienTien() == true) {
            C[i]->Xuat();
            cout << "\n";
        }
    }
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
