#include "QLTHISINH.h"
QLTHISINH::QLTHISINH(void)
{
}
QLTHISINH::~QLTHISINH(void)
{
}
istream& operator>>(istream &is, QLTHISINH &qlts)
{
	THISINHA tsa;
	THISINHC tsc;
	cout << "\n----------------------------------";
	cout << "\nNhap so thi sinh thi khoi A: ";
	is >> qlts.nA;
	cout << "Nhap thong tin tung thi sinh: ";
	for (int i = 0; i<qlts.nA; i++)
	{
		is >> tsa;
		qlts.vA.push_back(tsa);
	}
	cout << "\n----------------------------------";
	cout << "\nNhap so thi sinh thi khoi C: ";
	is >> qlts.nC;
	cout << "Nhap thong tin tung thi sinh: ";
	for (int i = 0; i<qlts.nC; i++)
	{
		is >> tsc;
		qlts.vC.push_back(tsc);
	}
	return is;
}

ostream& operator<<(ostream &os, QLTHISINH qlts)
{
	os << "\n DANH SACH THI SINH KHOI A\n";
	for (int i = 0; i<qlts.nA; i++) //i<vA.size()
		os << qlts.vA[i];
	os << "\n DANH SACH THI SINH KHOI C\n";
	for (int i = 0; i<qlts.nC; i++) //i<vA.size()
		os << qlts.vC[i];
	return os;
}