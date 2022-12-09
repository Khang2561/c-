#pragma once
#include"CanBo.h"
#include"HD.h"
#include"NC.h"
class GiangVien :private CanBo,HD,NC {
protected:
	
public:
	void Nhap();
	void Xuat();
	void TinhLuong();
	GiangVien();
	~GiangVien();
	
};