#pragma once
#include"CanBo.h"
class HD :private CanBo {
protected:
	string PhongBan;
	long ChucVu;
	long HS;
	long SNC;
public:
	HD() {

	}
	HD(string ms1, string ten, string phongban, long chucvu, long hs, long snc) :CanBo(ms1,ten) {
		PhongBan = phongban;
		ChucVu = chucvu;
		HS = hs;
		SNC = snc;
	}
	void Nhap();
	void Xuat();
	void setChucVu(long chucvu);
	void setPhongBan(string phongban);
	void setHS(long hs);
	void setSNC(long snc);
	string getPhongBan();
	long getChucVu();
	long getHS();
	long getSNC();

};