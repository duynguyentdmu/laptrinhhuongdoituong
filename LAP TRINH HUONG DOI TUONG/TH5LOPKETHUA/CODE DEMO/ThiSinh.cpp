#include "ThiSinh.h"


ThiSinh::ThiSinh(void)
{
}


ThiSinh::~ThiSinh(void)
{
}
istream& operator>>(istream &is, ThiSinh &ts)
{
	cout<<"\nNhap so bao danh: ";
	fflush(stdin);
	getline(is,ts.SBD);
	cout<<"\nNhap ho va ten: ";
	fflush(stdin);
	getline(is,ts.Hoten);
	cout<<"\nNhap ngay thang nam sinh: ";
	is>>ts.Ngaysinh;
	return is;
}

ostream& operator<<(ostream &os, ThiSinh ts)
{
	os<<ts.SBD<<"  |  "<<ts.Hoten<<"  |  "<<ts.Ngaysinh<<"  |  "<<ts.Tongdiem;
	return os;
}
