#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "NHANVIEN.h"
#include "HOCPHAN.h"
class GIAOVIEN :
	public NHANVIEN
{
protected:
	string capbacgv;
	HOCPHAN hocphan;
public:
	GIAOVIEN(void);
	~GIAOVIEN(void);
	friend istream& operator>>(istream &is, GIAOVIEN &gv);
	friend ostream& operator<<(ostream &os, GIAOVIEN gv);
};
