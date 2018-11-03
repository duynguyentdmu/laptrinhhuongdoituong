#include "THISINHA.h"
THISINHA::THISINHA(void)
{
}
THISINHA::~THISINHA(void)
{
}

istream& operator>>(istream &is, THISINHA &tsa)
{
	THISINH *tam;
	tam = static_cast<THISINH*>(&tsa);
	is >> *tam;
	cout << "\nNhap diem toan : ";
	is >> tsa.toan;
	cout << "\nNhap diem ly : ";
	is >> tsa.ly;
	cout << "\nNhap diem hoa: ";
	is >> tsa.hoa;
	tsa.Tongdiem = tsa.toan + tsa.ly + tsa.hoa;
	return is;
}
ostream& operator<<(ostream &os, THISINHA tsa)
{
	THISINH tam;
	tam = static_cast<THISINH>(tsa);
	os << tam;
	os << "  : " << tsa.toan << " + " << tsa.ly << " + " << tsa.hoa << endl;
	return os;
}