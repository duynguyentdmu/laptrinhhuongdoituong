
#include "BANDOC.h"

istream& operator>>(istream &is, BANDOC &bd)
{
	cout << "\nNhap ma ban doc: ";
	fflush(stdin);
	getline(is, bd.MaBD);
	cout << "\nNhap ho ten ban doc: ";
	fflush(stdin);
	getline(is, bd.HoTen);
	cout << "\nNhap ngay sinh. ";
	cin >> bd.ns;
	cout << "\nNhap so luong sach muon: ";
	is >> bd.sosachmuon;
	bd.DS_sachmuon = new SACH[bd.sosachmuon + 1];
	cout << "\nNhap thong tin tung sach muon: \n";
	for (int i = 0; i < bd.sosachmuon; i++)
		cin >> bd.DS_sachmuon[i];
	return is;
}

ostream& operator<<(ostream &os, BANDOC bd)
{
	cout << "\nTHONG TIN BAN DOC\n";
	os << bd.MaBD << " | " << bd.HoTen << " | " << bd.ns << " | " << bd.sosachmuon << "\n";
	cout << "\n == Thong tin tung loai sach ma ban muon == \n";
	for (int i = 0; i < bd.sosachmuon; i++)
		os << bd.DS_sachmuon[i];
	return os;
}

BANDOC::BANDOC()
{
}


BANDOC::~BANDOC()
{
}