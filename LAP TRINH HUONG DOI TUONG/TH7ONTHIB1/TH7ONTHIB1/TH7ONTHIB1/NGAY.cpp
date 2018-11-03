#include "NGAY.h"
NGAY::NGAY()
{
}
NGAY::~NGAY()
{
}
istream& operator >> (istream &is, NGAY &n)
{	
	cout << "\n\t Nhap vao ngay : ";
	is >> n.ngay;
	cout << "\n\t Nhap vao thang : ";
	is >> n.thang;
	cout << "\n\t Nhap vao nam : ";
	is >> n.nam;
	return is;
}
ostream& operator << (ostream &os, NGAY n)
{
	os << n.ngay << "/" << n.thang << "/" << n.nam;
	return os;
}