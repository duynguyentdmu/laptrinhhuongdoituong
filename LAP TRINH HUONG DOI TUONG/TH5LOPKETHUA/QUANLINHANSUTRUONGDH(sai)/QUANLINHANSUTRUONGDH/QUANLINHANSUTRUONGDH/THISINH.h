#pragma once
#include "NGAY.h"
#include "string"
#include <iomanip>
class THISINH
{
protected:
	string SBD;
	string Hoten;
	NGAY Ngaysinh;
	float Tongdiem;
public:
	THISINH(void);
	~THISINH(void);
	friend istream& operator>>(istream &is, THISINH &ts);
	friend ostream& operator<<(ostream &os, THISINH ts);
};
