#pragma once

#include"CanBo.h"
#include"GiangVien.h"
#include"HD.h"
#include"NC.h"
#include"VP.h"
#include<istream>
#include<ostream>
#include<vector>
class QLNV :private CanBo, GiangVien, HD, NC, VP {
protected:
	int gv;
	int vp;
	vector<GiangVien*>A;
	vector<VP*>B;
public:
	QLNV();
	QLNV(int gv1, int vp1);
	~QLNV();
	friend istream& operator>>(istream& in,QLNV& p);
	friend ostream& operator<<(ostream& out, QLNV& p);

};