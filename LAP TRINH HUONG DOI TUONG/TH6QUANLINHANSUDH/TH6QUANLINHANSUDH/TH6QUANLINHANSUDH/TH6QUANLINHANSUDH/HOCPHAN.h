#pragma once
#include <iostream>
#include <string>
#include <iomanip>
//#include "GIAOVIEN.h"
using namespace std;
class HOCPHAN
//	:public GIAOVIEN
{
private:
	string tenhp; // ten hoc phan
	string nhom;	// nhom hoc phan
	string sodvht; // so don vi hoc trinh
public:

	HOCPHAN(void);
	~HOCPHAN(void);
	friend istream& operator >> (istream &is, HOCPHAN &hp);
	friend ostream& operator << (ostream &os, HOCPHAN hp);

};
