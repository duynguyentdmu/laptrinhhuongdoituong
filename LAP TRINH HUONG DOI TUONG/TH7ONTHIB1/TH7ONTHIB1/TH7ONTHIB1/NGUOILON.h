#pragma once
#include <iostream>
#include <iomanip>
#include "DOCGIA.h"
#include <string>
#define max 100
using namespace std;
class NGUOILON:
	public DOCGIA
{
private:
	string cmnd;
public:
	NGUOILON();
	~NGUOILON();
	friend istream& operator >> (istream &is, NGUOILON &nl);
	friend ostream& operator << (ostream &os, NGUOILON nl);
};

