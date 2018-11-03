#pragma once
#include "THISINHA.h"
#include "THISINHC.h"
#include "vector"
class QLTHISINH
{
private:
	vector<THISINHA> vA;
	vector<THISINHC> vC;
	int nA, nC;
public:
	QLTHISINH(void);
	~QLTHISINH(void);
	friend istream& operator>>(istream &is, QLTHISINH &qlts);
	friend ostream& operator<<(ostream &os, QLTHISINH qlts);

};
