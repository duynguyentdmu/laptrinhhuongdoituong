#include "QUANLIDOCGIA.h"
using namespace std;

QUANLIDOCGIA::QUANLIDOCGIA()
{
}
QUANLIDOCGIA::~QUANLIDOCGIA()
{
}

istream& operator>>(istream &is, QUANLIDOCGIA &qldg)
{
	NGUOILON nl;
	TREEM te;
	cout << "\n\t-----------------------------------------";
	cout << "\n\tNHAP SO LUONG DOC GIA NGUOI LON : "; is >> qldg.nNL;
	cout << "\t-----------------------------------------\n\n";
	if (qldg.nNL == 0)
	{
		cout << "\n\t\t-----------------------------------------------------------------";
		cout << "\n\t\t   == BAN KHONG NHAP VAO THONG TIN DOC GIA NAO == \n";
		cout << "\t\t-----------------------------------------------------------------\n\n";
	}
	else
	{
		cout << "== NHAP THONG TIN DOC GIA NGUOI LON == \n";
		for (int i = 0; i < qldg.nNL; i++)
		{	
			is >> nl;
			qldg.vaa.push_back(nl);
		}
	}
	cout << "\n\t----------------------------------";
	cout << "\n\tNHAP SO LUONG DOC GIA TRE EM : ";
	is >> qldg.nTE;
	cout << "\t----------------------------------\n\n";
	if (qldg.nTE == 0)
	{
		cout << "\n\t\t-----------------------------------------------------------------";
		cout << "\n\t\t   == BAN KHONG NHAP VAO THONG TIN DOC GIA NAO == \n";
		cout << "\t\t-----------------------------------------------------------------\n\n\n";
	}
	else
	{
		cout << "== NHAP THONG TIN DOC GIA TRE EM == \n";
		for (int i = 0; i < qldg.nTE; i++)
		{
			is >> te;
			qldg.vC.push_back(te);
		}
		return is;
	}
}
ostream& operator<<(ostream &os, QUANLIDOCGIA qldg)
{
	os << "\n" << " \t== DANH SACH DOC GIA NGUOI LON ==\n" << "\n";
	if (qldg.nNL == 0)
		cout << "\n == XIN LOI ! KHONG CO DU LIEU DE HIEN THI ! == \n";
	else
	{
		for (int i = 0; i < qldg.nNL; i++) //i<vA.size()
			os << qldg.vaa[i];
	}
	cout << "-------------------------------------------\n";
	os << "\n" << " \t== DANH SACH DOC GIA TRE EM ==\n" << "\n";
	//os << "\n== DANH SACH GIAO VIEN ==\n";
	if (qldg.nTE == 0)
		cout << "\n == XIN LOI ! KHONG CO DU LIEU DE HIEN THI ! == \n\n\n => NHAN PHIM BAT KI DE THOAT CHUONG TRINH!\n\n\n\n";
	else
	{
		for (int i = 0; i < qldg.nTE; i++) //i<vA.size()
			os << qldg.vC[i];
		return os;
	}
}