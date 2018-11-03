#include "NGAY.h"

NGAY::NGAY()
{
}


NGAY::~NGAY()
{
}

istream& operator >> (istream &is, NGAY &n)
{
	cout << "\n == MOI NHAP VAO NGAY THANG NAM SINH CUA SINH VIEN == ";
	cout << "\n NHAP VAO NGAY : ";
	is >> n.ngay;
	cout << "\n NHAP VAO THANG : ";
	is >> n.thang;
	cout << "\n NHAP VAO NAM : ";
	is >> n.nam;
}
ostream& operator << (ostream &os, NGAY n)
{
	cout << "== NGAY THANG NAM SINH CUA NHAN VIEN ==";
	cout << "/"; os << n.ngay; cout << "/"; os << n.thang; cout << "/"; os << n.nam;
}