#pragma once
#include "NGAY.h"
using namespace std;
class PHONGBAN
{
protected:
	string manpp;
	string tenpp;
	NGAY nhaphang;
	NGAY xuathang;
	string loaihang;
	string chucvu;
	string donvi;
public:
	PHONGBAN(void);
	~PHONGBAN(void);
	friend istream& operator>>(istream &is, PHONGBAN &pb);
	friend ostream& operator<<(ostream &os, PHONGBAN pb);
};