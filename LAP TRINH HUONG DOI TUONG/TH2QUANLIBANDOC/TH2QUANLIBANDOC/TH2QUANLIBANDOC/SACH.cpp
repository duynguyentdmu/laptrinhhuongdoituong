#include "SACH.h"

istream &operator>>(istream &is, SACH &s)
{
	cout << "\nNhap ma sach: ";
	fflush(stdin);
	cin.ignore();
	getline(is, s.MaSach);
	cout << "\nNhap ten sach: ";
	fflush(stdin);
	getline(is, s.TenSach);
	cout << "\nNhap tac gia: ";
	fflush(stdin);
	getline(is, s.TacGia);
	cout << "\nNhap nha xuat ban: ";
	fflush(stdin);
	getline(is, s.NXB);
	cout << "\nNhap the loai: ";
	fflush(stdin);
	getline(is, s.TheLoai);
	cout << "\n-------------------------------";
	return is;
}

ostream& operator<<(ostream &os, SACH s)
{
	os << "\n" << s.MaSach << " | " << s.TenSach << " | " << s.TacGia << " | " << s.NXB << " | " << s.TheLoai;
	return os;
}

SACH::SACH()
{
}


SACH::~SACH()
{
}