#pragma once
#include <string.h>
#include <iostream>
#include <iomanip>
#define max 100
using namespace std;
class NVien
{
private:
	char Hten[max];
	char NSinh[max];
	char ChucVu[max];
	char QQuan[max];
	char TDo[max];
public:
	void nhap();
	void xuat();
	NVien(void);
	~NVien(void);
};