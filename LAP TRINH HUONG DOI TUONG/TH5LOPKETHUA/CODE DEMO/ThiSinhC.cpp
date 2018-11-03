#include "ThiSinhC.h"


ThiSinhC::ThiSinhC(void)
{
}


ThiSinhC::~ThiSinhC(void)
{
}

istream& operator>>(istream &is, ThiSinhC &tsC)
{
	ThiSinh *tam;
	tam=static_cast<ThiSinh*>(&tsC);
	is>>*tam;
	cout<<"\nNhap diem van, su , dia : ";
	is>>tsC.van>>tsC.su>>tsC.dia;
	tsC.Tongdiem=tsC.van+tsC.su+tsC.dia;
	return is;
}
ostream& operator<<(ostream &os, ThiSinhC tsC)
{
	ThiSinh tam;
	tam=static_cast<ThiSinh>(tsC);
	os<<tam;
	os<<"  : "<<tsC.van<<" + "<<tsC.su<<" + "<<tsC.dia<<endl;
	return os;
}