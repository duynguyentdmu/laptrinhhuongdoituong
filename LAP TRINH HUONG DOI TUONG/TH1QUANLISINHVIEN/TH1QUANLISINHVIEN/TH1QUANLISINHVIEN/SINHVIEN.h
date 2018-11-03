#pragma once
#include "NGAY.h"
#include "MONHOC.h"
class SINHVIEN
{
private:
	string MaSV;
	string HoTen;
	NGAY ns;
	string nganhhoc;
	short soMH;
	MONHOC *ds_mh;
	float diemTB;
public:
	SINHVIEN();
	~SINHVIEN();
	friend istream& operator>>(istream &is, SINHVIEN &sv);
	friend ostream& operator<<(ostream &os, SINHVIEN sv);
};