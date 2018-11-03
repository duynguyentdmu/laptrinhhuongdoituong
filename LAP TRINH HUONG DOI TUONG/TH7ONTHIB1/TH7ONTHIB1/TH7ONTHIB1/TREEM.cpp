#include "TREEM.h"
TREEM::TREEM()
{
}
TREEM::~TREEM()
{
}
istream& operator >> (istream &is, TREEM &te)
{
	cin.ignore();
	cout << " Nhap ho ten nguoi dai dien : ";
	getline(is, te.nguoidaidien);
	cout << " So tien lam the 20.000 VND/ Tre em ";
	return is;
}
ostream& operator << (ostream &os, TREEM te)
{	
	os << " Ho ten nguoi dai dien : " << te.nguoidaidien << "\n";
	return os;
}