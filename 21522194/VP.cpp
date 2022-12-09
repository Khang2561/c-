#include "VP.h"

VP::VP()
{
}

VP::~VP()
{
}

void VP::Nhap()
{
	HD::Nhap();
	TinhLuong();
}

void VP::Xuat()
{

}

void VP::TinhLuong()
{
	long phuccap = 0;
	if (HD::ChucVu == 1)
		phuccap = 1000000;
	if (HD::ChucVu == 2)
		phuccap = 2000000;
	else
		phuccap = 3500000;
	CanBo::Luong = 1490000 * HD::HS + HD::SNC * 100000 + phuccap;
}
