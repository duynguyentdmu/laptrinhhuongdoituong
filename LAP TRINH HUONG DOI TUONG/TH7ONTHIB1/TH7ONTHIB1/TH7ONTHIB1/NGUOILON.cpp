#include "NGUOILON.h"
#include "DOCGIA.h"
NGUOILON::NGUOILON()
{
}
NGUOILON::~NGUOILON()
{
}
istream& operator >> (istream &is, NGUOILON &nl)
{
	DOCGIA *tam;
	tam = static_cast<DOCGIA*>(&nl);
	cin.ignore();
	cout << " Nhap vao so CMND doc gia : ";
	fflush(stdin);
	getline(is, nl.cmnd);   //dung cho viec dinh nghia bien cmnd kieu chuoi string
	//nl.tienlamthehl = (nl.getSothanghl() * ks);
	return is;
}
ostream& operator << (ostream &os, NGUOILON nl)
{
	DOCGIA tam;
	tam = static_cast<DOCGIA>(nl);
	os << tam;
	os << "CMND : " << nl.cmnd << "\n";
	return os;
}