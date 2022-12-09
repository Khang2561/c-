#include "GiangVien.h"

void GiangVien::Nhap()
{
	
		NC::Nhap();
	
	
	TinhLuong();
}

void GiangVien::Xuat()
{
	NC::Xuat();
	
}

GiangVien::GiangVien()
{
}

GiangVien::~GiangVien()
{
}

void GiangVien::TinhLuong()
{
	long hs1;
	
		hs1 = NC::getHS();
	
	long phucap;
	
		if (NC::getTrinhDo() == 1) {
			phucap = 1000000;
		}
		if (NC::getTrinhDo() == 2) {
			phucap = 2000000;
		}
		if (NC::getTrinhDo() == 3) {
			phucap = 4000000;
		}

	
	CanBo::Luong = 1490000 * hs1 + NC::SoTiet * 110000+phucap;
}
