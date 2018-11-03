#include "GIAOVIEN.h"
GIAOVIEN::GIAOVIEN(void)
{
}
GIAOVIEN::~GIAOVIEN(void)
{
}
istream& operator>>(istream &is, GIAOVIEN &gv)
{
	NHANVIEN *tam;
	tam = static_cast<NHANVIEN*>(&gv);
	is >> *tam;

	cout << "\n\tNHAP CAP BAC CUA GIAO VIEN : ";
	getline(is, gv.capbacgv);

	cout << "\n\t== NHAP VAO HOC PHAN GIAO VIEN PHU TRACH ==\n ";
	is >> gv.hocphan;

	return is;
}
ostream& operator<<(ostream &os, GIAOVIEN gv)
{
	NHANVIEN tam;
	tam = static_cast<NHANVIEN>(gv);
	os << tam;
	os << "\n\t* CAP BAC GIAO VIEN : " << gv.capbacgv << endl;
	os << "\n\t== HOC PHAN MA GIAO VIEN PHU TRACH == \n" << gv.hocphan;
	return os;
}