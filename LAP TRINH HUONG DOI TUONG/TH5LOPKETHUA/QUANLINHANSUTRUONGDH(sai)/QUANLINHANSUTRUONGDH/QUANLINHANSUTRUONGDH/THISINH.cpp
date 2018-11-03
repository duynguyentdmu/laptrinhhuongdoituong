#include "THISINH.h"
THISINH::THISINH(void)
{
}
THISINH::~THISINH(void)
{
}
istream& operator>>(istream &is, THISINH &ts)
{	
	cout << "\n---------";
	cin.ignore();
	cout << "\nNhap so bao danh: ";
	//fflush(stdin);
	getline(is, ts.SBD);


	cout << "\nNhap ho va ten: ";
	fflush(stdin);
	getline(is, ts.Hoten);


	cout << "\nNhap ngay thang nam sinh: ";
	is >> ts.Ngaysinh;
	return is;
}
ostream& operator<<(ostream &os, THISINH ts)
{
	os << ts.SBD << "  |  " << ts.Hoten << "  |  " << ts.Ngaysinh << "  |  " << ts.Tongdiem;
	return os;
}