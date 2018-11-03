#include "SINHVIEN.h"
#include "vector"
void main()
{
	int n, i;
	SINHVIEN temp;
	vector<SINHVIEN> DSSV;
	cout << "-----------------------------------";
	cout << "\nNhap so luong sinh vien: ";	cin >> n;
	cout << "-----------------------------------";
	cout << "\nNhap thong tin sinh vien: \n";
	for (i = 0; i < n; i++)
	{
		cin >> temp;
		DSSV.push_back(temp);
	}
	cout << "\nDanh sach sinh vien:\n";
	for (i = 0; i < DSSV.size(); i++)
		cout << DSSV[i];

	system("pause");

}