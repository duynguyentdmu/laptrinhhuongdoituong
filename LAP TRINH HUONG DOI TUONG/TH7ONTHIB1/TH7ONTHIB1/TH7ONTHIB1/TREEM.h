#pragma once
#include <iostream>
#include <iomanip>
#include "DOCGIA.h"
#include <string>
using namespace std;
class TREEM:
	public DOCGIA
{
private:
	string nguoidaidien;
public:
	TREEM();
	~TREEM();
	friend istream& operator >> (istream &is, TREEM &te);
	friend ostream& operator << (ostream &os, TREEM te);
};

