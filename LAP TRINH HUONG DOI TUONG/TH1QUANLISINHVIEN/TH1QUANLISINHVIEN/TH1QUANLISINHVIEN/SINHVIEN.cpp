#include "SINHVIEN.h"



SINHVIEN::SINHVIEN()
{
}


SINHVIEN::~SINHVIEN()
{
}

istream &operator>>(istream &is, SINHVIEN &sv)
{
	short tongdiem, tongdvht;
	tongdiem = tongdvht = 0;
	cin.ignore();
	cout << "\nNhap ma sinh vien: ";
	getline(is, sv.MaSV);
	//cin.ignore();
	cout << "\nNhap ho va ten: ";
	getline(is, sv.HoTen);
	cout << "\nNhap ngay sinh: ";
	is >> sv.ns;
	cin.ignore();
	cout << "\nNhap nganh hoc: ";
	getline(is, sv.nganhhoc);
	cout << "\nNhap so mon hoc ma sinh vien tham gia: ";
	is >> sv.soMH;
	sv.ds_mh = new MONHOC[sv.soMH + 1];
	cout << "\nNhap thong tin tung mon hoc: \n";
	for (int i = 0; i < sv.soMH; i++)
	{
		is >> sv.ds_mh[i];
		tongdiem += sv.ds_mh[i].getdiem()*sv.ds_mh[i].getsoDVHT();
		tongdvht += sv.ds_mh[i].getsoDVHT();
	}
	sv.diemTB = float(tongdiem / tongdvht);
	return is;
}

ostream& operator<<(ostream &os, SINHVIEN sv)
{
	os << sv.MaSV << " | " << sv.HoTen << " | " << sv.ns << " | " << sv.nganhhoc << " | " << sv.diemTB << "\n";
	os << "THONG TIN CHI TIET TUNG MON HOC\n";
	os << "STT  Ma MH    Ten MH         So DVHT    Diem\n";
	for (int i = 0; i < sv.soMH; i++)
		os << setw(4) << i + 1 << sv.ds_mh[i];
	return os;
}