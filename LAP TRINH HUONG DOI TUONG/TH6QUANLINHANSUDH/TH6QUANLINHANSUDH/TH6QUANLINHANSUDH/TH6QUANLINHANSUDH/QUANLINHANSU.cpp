#include "QUANLINHANSU.h"
using namespace std;

QUANLINHANSU::QUANLINHANSU(void)
{
}
QUANLINHANSU::~QUANLINHANSU(void)
{
}
istream& operator>>(istream &is, QUANLINHANSU &qlns)
{
	NHANVIENHC nvhc;
	GIAOVIEN gv;
	cout << "\n\t-----------------------------------------";
	cout << "\n\tNHAP SO LUONG NHAN VIEN HANH CHINH : ";is >> qlns.nA;
	cout << "\t-----------------------------------------\n\n";
	if (qlns.nA == 0) 
	{
		cout << "\n\t\t-----------------------------------------------------------------";
		cout << "\n\t\t   == BAN KHONG NHAP VAO THONG TIN NHAN VIEN HANH CHINH NAO == \n";
		cout << "\t\t-----------------------------------------------------------------\n\n";
	}
	else
	{
		cout << "== NHAP THONG TIN NHAN VIEN HANH CHINH == ";
		for (int i = 0; i < qlns.nA; i++)
		{
			is >> nvhc;
			qlns.vA.push_back(nvhc);
		}
	}
	cout << "\n\t----------------------------------";
	cout << "\n\tNHAP SO LUONG GIAO VIEN : ";
	is >> qlns.nC;
	cout << "\t----------------------------------\n\n";
	if (qlns.nC == 0)
	{
		cout << "\n\t\t-----------------------------------------------------------------";
		cout << "\n\t\t   == BAN KHONG NHAP VAO THONG TIN GIAO VIEN NAO == \n";
		cout << "\t\t-----------------------------------------------------------------\n\n\n";
	}
	else
	{
		cout << "== NHAP THONG TIN GIAO VIEN == \n";
		for (int i = 0; i < qlns.nC; i++)
		{
			is >> gv;
			qlns.vC.push_back(gv);
		}
		return is;
	}
}
ostream& operator<<(ostream &os, QUANLINHANSU qlns)
{
	os << "\n" << " \t== DANH SACH NHAN VIEN HANH CHINH ==\n" << "\n";
	if (qlns.nA == 0)
		cout << "\n == XIN LOI ! KHONG CO DU LIEU DE HIEN THI ! == \n";
	else
	{
		for (int i = 0; i < qlns.nA; i++) //i<vA.size()
			os << qlns.vA[i];
	}
	cout << "-------------------------------------------\n";
	os << "\n" << " \t== DANH SACH GIAO VIEN ==\n" << "\n";
	//os << "\n== DANH SACH GIAO VIEN ==\n";
	if (qlns.nC == 0)
		cout << "\n == XIN LOI ! KHONG CO DU LIEU DE HIEN THI ! == \n\n\n => NHAN PHIM BAT KI DE THOAT CHUONG TRINH!\n\n\n\n";
	else
	{
		for (int i = 0; i < qlns.nC; i++) //i<vA.size()
			os << qlns.vC[i];
		return os;
	}
}