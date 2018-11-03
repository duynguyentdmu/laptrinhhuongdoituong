#pragma once
#include "THISINH.h"
class THISINHA :
	public THISINH
{
private:
	float toan, ly, hoa;
public:
	THISINHA();
	~THISINHA();
	friend istream& operator >> (istream &is, THISINHA &tsa);
	friend ostream& operator << (ostream &os, THISINHA tsa);
};

