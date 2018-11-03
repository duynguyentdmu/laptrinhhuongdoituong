#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "NHANVIEN.h"
using namespace std;
class NHANVIENHC : public NHANVIEN
{
private:
	string capbacnvhc;
	string motacv;

public:
	NHANVIENHC();
	~NHANVIENHC();
	friend istream& operator>>(istream &is, NHANVIENHC &nvhc);
	friend ostream& operator<<(ostream &os, NHANVIENHC nvhc);
};
