#include "MONHOC.h"



MONHOC::MONHOC()
{
}


MONHOC::~MONHOC()
{
}

istream& operator >> (istream &is, MONHOC &mh)
{
	cout << "\n NHAP VAO MA MON HOC: ";
	cin.ignore(); 
	getline(is, mh.mamh);

	cout << "\n NHAP VAO TEN MON HOC: ";
	getline(is, mh.tenmh);

	cout << "\n NHAP SO TI CHI: ";
	is >> mh.sotinchi;

	cout << "\n NHAP DIEM KET THUC HOC PHAN: ";
	is >> mh.diem;

	cout << "------------------------------";
	return is;
}
ostream& operator << (ostream &os, MONHOC mh)
{
	os << setw(6) << mh.mamh << setw(18) << mh.tenmh << setw(4) << mh.sotinchi << setw(4) << mh.diem << "\n";
	return os;
}
