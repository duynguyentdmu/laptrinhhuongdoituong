#pragma once
#include "NGUOILON.h"
#include "TREEM.h"
#include <iostream>
#include <vector>
//#include <iomanip>
using namespace std;

class QUANLIDOCGIA
{
private:
	vector<NGUOILON> vaa;
	vector<TREEM> vC;
	int nNL, nTE;
public:
	QUANLIDOCGIA();
	~QUANLIDOCGIA();
	friend istream& operator>>(istream &is, QUANLIDOCGIA &qldg);
	friend ostream& operator<<(ostream &os, QUANLIDOCGIA qldg);

};

