#pragma once
#include "iostream"
using namespace std;
class NGAY
{
private:
	int ngay, thang, nam;
public:
	friend istream& operator>>(istream &is, NGAY &n);
	friend ostream& operator<<(ostream &os, NGAY n);
	NGAY();
	~NGAY();
};