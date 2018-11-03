#include "NGAY.h"
NGAY::NGAY()
{
}
NGAY::~NGAY()
{
}

istream& operator >> (istream &is, NGAY &n)
{
	cout << "\n NHAP VAO NGAY: ";
	is >> n.ngay;

	cout << "\n NHAP VAO THANG: ";
	is >> n.thang;

	cout << "\n NHAP VAO NAM: ";
	is >> n.nam;

	return is;
}
ostream& operator << (ostream &os, NGAY n)
{
	os << n.ngay << "/" << n.thang << "/" << n.nam;
	return os;
}