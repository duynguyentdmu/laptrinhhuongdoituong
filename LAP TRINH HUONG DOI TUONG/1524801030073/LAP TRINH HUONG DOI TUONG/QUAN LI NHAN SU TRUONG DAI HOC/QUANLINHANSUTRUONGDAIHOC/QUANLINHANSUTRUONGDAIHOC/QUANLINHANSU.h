#pragma once
#include "NHANVIENHC.h"
#include "GIAOVIEN.h"
#include "vector"
using namespace std;
class QUANLINHANSU
{
private:
	vector<NHANVIENHC> vA;
	vector<GIAOVIEN> vC;
	int nA, nC;
public:
	QUANLINHANSU(void);
	~QUANLINHANSU(void);
	friend istream& operator>>(istream &is, QUANLINHANSU &qlns);
	friend ostream& operator<<(ostream &os, QUANLINHANSU qlns);
};