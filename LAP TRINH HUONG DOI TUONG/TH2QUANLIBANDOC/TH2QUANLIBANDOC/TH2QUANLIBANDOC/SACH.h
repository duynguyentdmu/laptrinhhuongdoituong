#pragma once
#include "iostream"
#include "string"
using namespace std;

class SACH
{
private:
	string MaSach;
	string TenSach;
	string TacGia;
	string NXB;
	string TheLoai;
public:
	friend istream& operator>>(istream &is, SACH &s);
	friend ostream& operator<<(ostream &os, SACH s);
	SACH();
	~SACH();
};