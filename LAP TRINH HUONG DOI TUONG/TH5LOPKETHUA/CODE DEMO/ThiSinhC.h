#pragma once
#include "ThiSinh.h"
class ThiSinhC: public ThiSinh
{
private:
	float van, su, dia;
public:
	ThiSinhC(void);
	~ThiSinhC(void);
	friend istream& operator>>(istream &is, ThiSinhC &tsC);
	friend ostream& operator<<(ostream &os, ThiSinhC tsC);
};

