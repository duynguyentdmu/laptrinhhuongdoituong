#pragma once
//#include "NHANVIENHC.h"
//#include "GIAOVIEN.h"
#include "NGAY.h"
using namespace std;
class NHANVIEN
{
protected:
	string manv;
	string tennv;
	NGAY ngaysinh;
	string trinhdo;
	string chucvu;
	string donvi;
public:
	NHANVIEN();
	~NHANVIEN();
	friend istream& operator>>(istream &is, NHANVIEN &nv);
	friend ostream& operator<<(ostream &os, NHANVIEN nv);
};
