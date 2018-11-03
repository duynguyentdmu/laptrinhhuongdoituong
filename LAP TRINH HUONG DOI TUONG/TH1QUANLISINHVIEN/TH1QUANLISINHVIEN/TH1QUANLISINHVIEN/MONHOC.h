#pragma once
#include "iostream"
#include "string"
#include "iomanip"
using namespace std;
class MONHOC
{
private:
	string MaMH;
	string TenMH;
	short soDVHT;
	float diem;
public:
	MONHOC();
	~MONHOC();
	friend istream& operator>>(istream &is, MONHOC &mh);
	friend ostream& operator<<(ostream &os, MONHOC mh);
	short getsoDVHT()
	{
		return soDVHT;
	}
	void setsoDVHT(short dvht)
	{
		soDVHT = dvht;
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