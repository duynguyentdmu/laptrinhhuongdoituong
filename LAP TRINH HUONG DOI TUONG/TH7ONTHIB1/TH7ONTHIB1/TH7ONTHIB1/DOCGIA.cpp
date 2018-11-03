#include "DOCGIA.h"
DOCGIA::DOCGIA()
{
}
DOCGIA::~DOCGIA()
{
}
//int DOCGIA::getSothanghl()
//{
//	return sothanghl;
//}
istream& operator >> (istream &is, DOCGIA &dg)
{
	cin.ignore();
	cout << "\n Nhap so thang co hieu luc cua the: ";
	is >> dg.sothanghl;
	cout << " Nhap vao ho ten doc gia: ";
	getline(is,dg.tendg);
	cout << " Nhap ngay lap the : ";
	is >> dg.ngaylapthe;	
	return is;
}
ostream& operator << (ostream &os, DOCGIA dg)
{
	os << "\n\t* SO THANG HIEU LUC CUA THE : " << dg.sothanghl;
	os << "\n\t* TEN DOC GIA : " << dg.tendg;
	os << "\n\t* NGAY LAP THE :  " << dg.ngaylapthe;
	return os;
}
