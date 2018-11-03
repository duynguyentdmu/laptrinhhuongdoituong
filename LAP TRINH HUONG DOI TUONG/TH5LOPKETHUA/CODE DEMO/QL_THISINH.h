#pragma once
#include "ThiSinhA.h"
#include "ThiSinhC.h"
#include "vector"
class QL_THISINH
{
private:
	vector<ThiSinhA> vA;
	vector<ThiSinhC> vC;
	int nA,nC;
public:
	QL_THISINH(void);
	~QL_THISINH(void);
	friend istream& operator>>(istream &is, QL_THISINH &qlts);
	friend ostream& operator<<(ostream &os, QL_THISINH qlts);

};

