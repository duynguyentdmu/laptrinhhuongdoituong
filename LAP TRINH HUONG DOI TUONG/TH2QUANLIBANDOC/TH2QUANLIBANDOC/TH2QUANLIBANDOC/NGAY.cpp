#include "NGAY.h"

istream& operator>>(istream &is, NGAY &n)
{
	cout << "\n\n\tNhap ngay:";
	is >> n.ngay;
	cout << "\n\tNhap thang:";
	is >> n.thang;
	cout << "\n\tNhap nam:";
	is >> n.nam;
	cout << "----------------------------";
	return is;
}

ostream& operator<<(ostream &os, NGAY n)
{
	os << n.ngay << "/" << n.thang << "/" << n.nam;
	return os;
}


NGAY::NGAY()
{
}


NGAY::~NGAY()
{
}