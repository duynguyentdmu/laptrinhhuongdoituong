#include "THISINHC.h"


THISINHC::THISINHC(void)
{
}


THISINHC::~THISINHC(void)
{
}

istream& operator>>(istream &is, THISINHC &tsc)
{
	THISINH *tam;
	tam = static_cast<THISINH*>(&tsc);
	is >> *tam;
	cout << "\nNhap diem van : ";
	is >> tsc.van;
	cout << "\nNhap diem su : ";
	is >> tsc.su;
	cout << "\nNhap diem dia : ";
	is >> tsc.dia;
	tsc.Tongdiem = tsc.van + tsc.su + tsc.dia;
	return is;
}
ostream& operator<<(ostream &os, THISINHC tsc)
{
	THISINH tam;
	tam = static_cast<THISINH>(tsc);
	os << tam;
	os << "  : " << tsc.van << " + " << tsc.su << " + " << tsc.dia << endl;
	return os;
}