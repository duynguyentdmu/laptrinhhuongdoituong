#pragma once
#include "Ngay.h"
#include "string"
class ThiSinh
{
protected:
	string SBD;
	string Hoten;
	Ngay Ngaysinh;
	float Tongdiem;
public:
	ThiSinh(void);
	~ThiSinh(void);
	friend istream& operator>>(istream &is, ThiSinh &ts);
	friend ostream& operator<<(ostream &os, ThiSinh ts);
};

