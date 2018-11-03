#include "NGAY.h"


NGAY::NGAY(void)
{
}


NGAY::~NGAY(void)
{
}

istream& operator>>(istream &is, NGAY &n)
{
	cout << "\n==Nhap ngay, thang, nam sinh cua thi sinh== ";
	cout << "\n\tNhap ngay : ";
	is >> n.ngay;
	cout << "\tNhap thang : ";
	is >> n.thang;
	cout << "\tNhap nam : ";
	is >> n.nam;
	return is;
}
ostream& operator<<(ostream &os, NGAY n)
{
	os << n.ngay << "/" << n.thang << "/" << n.nam;
	return os;
}