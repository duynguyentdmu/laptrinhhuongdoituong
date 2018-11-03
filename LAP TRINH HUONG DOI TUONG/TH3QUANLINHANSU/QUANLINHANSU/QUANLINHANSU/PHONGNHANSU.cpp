#include "NHANVIENHC.h"

NHANVIENHC::NHANVIENHC()
{
}

NHANVIENHC::~NHANVIENHC()
{
}

istream& operator>>(istream &is, NHANVIENHC &nvhc)
{
	NHANVIEN *tam;
	tam = static_cast<NHANVIEN*>(&nvhc);
	is >> *tam;

	cout << "\n\tNHAP CAP BAC NHAN VIEN HANH CHINH : ";
	getline(is, nvhc.capbacnvhc);

	cout << "\n\tNHAP MO TA CONG VIEC: ";
	getline(is, nvhc.motacv);

	return is;
}
ostream& operator << (ostream &os, NHANVIENHC nvhc)
{
	NHANVIEN tam;
	tam = static_cast<NHANVIEN>(nvhc);
	os << tam;
	os << "\n\t* CAP BAC NHAN VIEN HANH CHINH : " << nvhc.capbacnvhc;
	os << "\n\t* MO TA CONG VIEC: " << nvhc.motacv << endl;
	return os;
}