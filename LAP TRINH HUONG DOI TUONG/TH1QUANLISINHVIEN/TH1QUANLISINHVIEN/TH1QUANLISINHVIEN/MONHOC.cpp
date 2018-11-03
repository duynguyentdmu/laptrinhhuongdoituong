#include "MONHOC.h"



MONHOC::MONHOC()
{
}


MONHOC::~MONHOC()
{
}

istream& operator>>(istream &is, MONHOC &mh)
{
	//fflush(stdin);
	cout << "\n\tNhap ma mon hoc:";
	cin.ignore();
	getline(is, mh.MaMH);
	//cin.ignore();
	cout << "\n\tNhap ten mon hoc:";
	getline(is, mh.TenMH);
	cout << "\n\tNhap so tin chi: ";
	is >> mh.soDVHT;
	cout << "\n\tNhap diem ket thuc hoc phan: ";
	is >> mh.diem;

	cout << "-----------------------------------";
	return is;
}

ostream& operator<<(ostream &os, MONHOC mh)
{
	os << setw(6) << mh.MaMH << setw(18) << mh.TenMH << setw(4) << mh.soDVHT << setw(4) << mh.diem << "\n";
	return os;
}