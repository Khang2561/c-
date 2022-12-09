#pragma once
#include"HD.h"
#include"NC.h"
#include"CanBo.h"
class VP :private HD, NC, CanBo {
protected:

public:
	VP();
	~VP();
	void Nhap();
	void Xuat();
	void TinhLuong();
};