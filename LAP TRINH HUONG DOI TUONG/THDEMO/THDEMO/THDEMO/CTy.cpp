#include "CTy.h"

void CTy::nhapct()
{	
	cout << "\n\t== CHUONG TRINH QUAN LI NHAN VIEN CONG TY VERSION MINI ==: ";
	cout << "\n\tNhap Ten Cong Ty: ";
	fflush(stdin);
	cin.getline(TenCTy, max);
	cout << "\tNhap Dia Chi Cong Ty: ";
	fflush(stdin);
	cin.getline(DiaChi, max);
	cout << "\tNhap Nganh Nghe: ";
	fflush(stdin);
	cin.getline(Nghe, max);
	cout << "\tNhap so Nhan Vien: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{	
		cout << "=============";
		cout << "\nNhan Vien " << i << ": " << endl;
		N[i].nhap();
	}
}
void CTy::xuatct()
{
	cout << endl;
	cout << "\n\t== Thong Tin Cong Ty == " << endl;
	fflush(stdin);
	cout << "\n\tTen cong ty: " << TenCTy << endl;
	cout << "\n\tDia chi: " << DiaChi << endl;
	cout << "\n\tNganh nghe: " << Nghe << endl;
	cout << "\n\tDuyet danh sach nhan vien cong ty " << TenCTy << endl;

	for (int j = 1; j <= n; j++)
	{
		cout << "\nNhan Vien Thu " << j << ": " << endl;
		fflush(stdin);
		N[j].xuat();
		cout << "----------------------" << endl;
	}
}
CTy::CTy(void)
{
}


CTy::~CTy(void)
{
}