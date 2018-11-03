#pragma once
#include "THISINH.h"
class THISINHC :
	public THISINH
{
private:
	float van, su, dia;
public:
	THISINHC(void);
	~THISINHC(void);
	friend istream& operator>>(istream &is, THISINHC &tsc);
	friend ostream& operator<<(ostream &os, THISINHC tsc);
};
