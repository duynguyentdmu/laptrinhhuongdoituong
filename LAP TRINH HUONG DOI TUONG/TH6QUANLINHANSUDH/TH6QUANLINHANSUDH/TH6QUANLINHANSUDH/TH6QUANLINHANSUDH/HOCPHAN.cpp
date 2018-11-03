#include "HOCPHAN.h"
//#include "GIAOVIEN.h"
HOCPHAN::HOCPHAN(void)
{
}
HOCPHAN::~HOCPHAN(void)
{
}
istream& operator >> (istream &is, HOCPHAN &hp)
{
	//cin.ignore();
	cout << "\n\t\t* NHAP VAO TEN HOC PHAN : ";
	getline(is, hp.tenhp);

	cout << "\n\t\t* NHAP VAO MA NHOM : ";
	getline(is, hp.nhom);

	//cin.ignore();
	cout << "\n\t\t* NHAP SO DON VI HOC TRINH : ";
	getline(is, hp.sodvht);
	return is;
}
ostream& operator << (ostream &os, HOCPHAN hp)
{
	os << "  \n\tTEN HOC PHAN : " << hp.tenhp  << "\n";
	os << "   \tNHOM : " << hp.nhom << "\n";
	os << "   \tSO DON VI HOC TRINH : " << hp.sodvht << "\n";
	return os;
}