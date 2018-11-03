#include "NVien.h"
#include <iostream>
#include <string>
using namespace std;
void NVien::nhap()
{
	//fflush(stdin);
	cin.ignore();
	cout << "\n\tNhap Ho va Ten: ";
	cin.getline(Hten, 255);
	cout << "\tNhap Ngay Sinh: ";

	cin.getline(NSinh, 255);
	cout << "\tNhap Chuc Vu: ";

	cin.getline(ChucVu, 255);
	cout << "\tNhap Que Quan: ";

	cin.getline(QQuan, 255);
	cout << "\tNhap Trinh Do: ";
	cin.getline(TDo, 255);
}
void NVien::xuat()
{
	cout << "\n\tHo va Ten: " << Hten << endl;
	cout << "\n\tNgay Sinh: " << NSinh << endl;
	cout << "\n\tChuc vu: " << ChucVu << endl;
	cout << "\n\tQue Quan: " << QQuan << endl;
	cout << "\n\tTrinh Do: " << TDo << endl;
}
NVien::NVien(void)
{
}


NVien::~NVien(void)
{
}