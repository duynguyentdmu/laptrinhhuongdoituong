#pragma once
#include <iostream.>
#include <iomanip>
#include <string>
using namespace std;
class NGAY
{
private:
	int ngay, thang, nam;
public:
	NGAY();
	~NGAY();
	friend istream& operator >> (istream &is, NGAY &n);
	friend ostream& operator << (ostream &os, NGAY n);
};

