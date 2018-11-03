#include "NHANVIEN.h"
NHANVIEN::NHANVIEN(void)
{
}
NHANVIEN::~NHANVIEN(void)
{
}
istream& operator>>(istream &is, NHANVIEN &nv)
{
	cout << "\n---------";
	cin.ignore();
	cout << "\n\tNHAP VAO MA NHAN VIEN: ";
	getline(is, nv.manv);

	cout << "\n\tNHAP HO TEN CUA NHAN VIEN: ";
	fflush(stdin);
	getline(is, nv.tennv);

	cout << "\n\t== NHAP NGAY SINH CUA NHAN VIEN ==\n ";
	is >> nv.ngaysinh;

	cin.ignore();
	cout << "\n\tNHAP VAO TRINH DO CUA NHAN VIEN: ";
	getline(is, nv.trinhdo);

	cout << "\n\tNHAP VAO CHUC VU CUA NHAN VIEN: ";
	getline(is, nv.chucvu);

	cout << "\n\tNHAP VAO DON VI CONG TAC : ";
	getline(is, nv.donvi);
	return is;
}
ostream& operator<<(ostream &os, NHANVIEN nv)
{
	os << "\n\t* MA NHAN VIEN : " << nv.manv;
	os << "\n\t* TEN NHAN VIEN : " << nv.tennv;
	os << "\n\t* NGAY SINH :  " << nv.ngaysinh;
	os << "\n\t* TRINH DO :  " << nv.trinhdo;
	os << "\n\t* CHUC VU :  " << nv.chucvu;
	return os;
}