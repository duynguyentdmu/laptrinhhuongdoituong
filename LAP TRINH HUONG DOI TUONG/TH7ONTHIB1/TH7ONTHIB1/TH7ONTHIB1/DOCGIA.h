#pragma once
#include <string>
#include "NGAY.h"
using namespace std;
class DOCGIA
{
private:
	int sothanghl;
	string tendg;
	NGAY ngaylapthe;
public:
	DOCGIA();
	~DOCGIA();
	//int getSothanghl();
	friend istream& operator >> (istream &is, DOCGIA &dg);
	friend ostream& operator << (ostream &os, DOCGIA dg);
};

