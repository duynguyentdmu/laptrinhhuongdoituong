#include "Ngay.h"


Ngay::Ngay(void)
{
}


Ngay::~Ngay(void)
{
}

istream& operator>>(istream &is, Ngay &n)
{
	cout<<"Nhap ngay, thang, nam: ";
	is>>n.ngay>>n.thang>>n.nam;
	return is;
}
ostream& operator<<(ostream &os, Ngay n)
{
	os<<n.ngay<<"/"<<n.thang<<"/"<<n.nam;
	return os;
}