#include "NGAY.h"

NGAY::NGAY()
{
}
NGAY::~NGAY()
{
}
istream& operator>>(istream &is, NGAY &n)
{
	cout << "\n\tNhap Ngay: ";
	is >> n.ngay;

	cout << "\n\tNhap Thang: ";
	is >> n.thang;

	cout << "\n\tNhap Nam: ";
	is >> n.nam;
	return is;
}
ostream& operator<<(ostream &os, NGAY n)
{
	os << n.ngay << "/" << n.thang << "/" << n.nam;
	return os;
}