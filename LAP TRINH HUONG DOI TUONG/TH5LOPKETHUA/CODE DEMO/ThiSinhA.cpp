#include "ThiSinhA.h"


ThiSinhA::ThiSinhA(void)
{
}


ThiSinhA::~ThiSinhA(void)
{
}

istream& operator>>(istream &is, ThiSinhA &tsA)
{
	ThiSinh *tam;
	tam=static_cast<ThiSinh*>(&tsA);
	is>>*tam;
	cout<<"\nNhap diem toan, ly, hoa: ";
	is>>tsA.toan>>tsA.ly>>tsA.hoa;
	tsA.Tongdiem=tsA.toan+tsA.ly+tsA.hoa;
	return is;
}
ostream& operator<<(ostream &os, ThiSinhA tsA)
{
	ThiSinh tam;
	tam=static_cast<ThiSinh>(tsA);
	os<<tam;
	os<<"  : "<<tsA.toan<<" + "<<tsA.ly<<" + "<<tsA.hoa<<endl;
	return os;
}
