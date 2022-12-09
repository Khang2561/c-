#include "DS.h"

#

QLNV::QLNV()
{
	gv = 0;
	vp = 0;
	vector<GiangVien*>A;
	vector<VP*>B;
}

QLNV::QLNV(int gv1, int vp1)
{
	gv = gv1;
	vp = vp1;
	vector<GiangVien*>A;
	vector<VP*>B;
}

QLNV::~QLNV()
{
}

istream& operator>>(istream& in, QLNV& p)
{
	cout << "\nNhap vao so giang vien : "; in >> p.gv;
	cout << "\nNhap vao so van phong: "; in >> p.vp;
	for (int i = 0; i < p.gv; i++) {
		cout << "\nnhap thong tin giang vieb thu " << i << ": ";
		GiangVien* z = new GiangVien();
		z->Nhap();
		p.A.push_back(z);
		
	}
	for (int i = 0; i < p.vp; i++) {
		cout << "\nnhap thong tin van phong thu " << i << ": ";
		VP* z = new VP();
		z->Nhap();
		p.B.push_back(z);

	}
	return in;
}

ostream& operator<<(ostream& out, QLNV& p)
{
	out << "\nXuat nhan vien gian vien: ";
	for (int i = 0; i < p.gv; i++) {
		
		p.A[i]->Xuat();

	}
	out << "\nXuat nhan van phong: ";
	for (int i = 0; i < p.vp; i++) {

		p.B[i]->Xuat();

	}
	return out;
}

