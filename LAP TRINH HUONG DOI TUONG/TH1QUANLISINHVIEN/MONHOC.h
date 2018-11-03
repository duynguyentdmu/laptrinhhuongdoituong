#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class MONHOC
{
private:
	string mamh;
	string tenmh;
	short sotinchi;
	float diem;
public:

	MONHOC();
	~MONHOC();
	friend istream& operator>>(istream &is, MONHOC &mh);
	friend ostream& operator<<(ostream &os, MONHOC mh);
	short getsotinchi()
	{
		return sotinchi;
	}
	void setsotinchi(short stc)
	{
		sotinchi = stc;
	}
	float getdiem()
	{
		return diem;
	}
	void setdiem(float d)
	{
		diem = d;
	}

};	


