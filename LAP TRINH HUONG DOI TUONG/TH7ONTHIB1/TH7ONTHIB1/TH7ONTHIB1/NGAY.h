#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class NGAY
{
private:
	int ngay, thang, nam;
public:
	NGAY(void);
	~NGAY(void);
	friend istream& operator >> (istream &is, NGAY &n);
	friend ostream& operator << (ostream &os, NGAY n);
};

