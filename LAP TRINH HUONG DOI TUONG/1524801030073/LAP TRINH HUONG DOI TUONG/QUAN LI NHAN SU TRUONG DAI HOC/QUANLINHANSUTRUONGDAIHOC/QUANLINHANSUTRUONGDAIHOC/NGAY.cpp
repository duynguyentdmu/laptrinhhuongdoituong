#include "NGAY.h"
NGAY::NGAY(void)
{
}
NGAY::~NGAY(void)
{
}
istream& operator>>(istream &is, NGAY &n)
{
	cout << "\n== NHAP VAO GIA TRI NGAY THANG NAM SINH CUA NHAN VIEN == ";
	cout << "\n\t* NHAP NGAY SINH : ";
	is >> n.ngay;
	cout << "\t* NHAP THANG : ";
	is >> n.thang;
	cout << "\t* NHAP NAM : ";
	is >> n.nam;
	cout << "\t------------------";
	return is;
}
ostream& operator<<(ostream &os, NGAY n)
{
	os << n.ngay << "/" << n.thang << "/" << n.nam;
	return os;
}