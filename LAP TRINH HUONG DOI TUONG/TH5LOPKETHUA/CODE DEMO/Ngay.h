#pragma once
#include "iostream"
using namespace std;
class Ngay
{
private:
	int ngay, thang, nam;
public:
	Ngay(void);
	~Ngay(void);
	friend istream& operator>>(istream &is, Ngay &n);
	friend ostream& operator<<(ostream &os, Ngay n);
};

