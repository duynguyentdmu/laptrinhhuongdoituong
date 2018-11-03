#pragma once
#include "NVien.h"
#include <iostream>
#include <string>
#define max 100
using namespace std;
class CTy
{
private:
	int n;
	char TenCTy[max];
	char DiaChi[max];
	char Nghe[max];
	NVien N[max];
public:
	CTy(void);
	~CTy(void);
	void nhapct();
	void xuatct();
};
