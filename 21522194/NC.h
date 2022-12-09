#pragma once
#include"CanBo.h"
class NC :private CanBo {
protected:
	string Khoa;
	long TrinhDo;
	long HS;
	long SoTiet;
public:
	NC() {

	}
	NC(string ms1, string ten, string khoa, long trinhdo, long hs, long st) :CanBo( ms1, ten) {
		Khoa = khoa;
		TrinhDo = trinhdo;
		HS = hs;
		SoTiet = st;
	}
	void Nhap();
	void Xuat();
	void setKhoa(string khoa);
	void setTrinhDo(long TrinhDo);
	void setHS(long HS);
	void setSoTiet(long st);
	string getKhoa();
	long getTrinhDo();
	long getHS();
	long getSoTiet();
};