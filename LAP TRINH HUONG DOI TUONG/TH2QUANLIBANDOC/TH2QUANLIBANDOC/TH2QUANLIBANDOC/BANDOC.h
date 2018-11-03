#pragma once
#include "iostream"
#include "string"
#include "NGAY.h"
#include "SACH.h"
using namespace std;

class BANDOC
{
private:
	string MaBD;
	string HoTen;
	NGAY ns;
	int sosachmuon;
	SACH *DS_sachmuon;
public:
	friend istream& operator>>(istream &is, BANDOC &bd);
	friend ostream& operator<<(ostream &os, BANDOC bd);
	BANDOC();
	~BANDOC();
};