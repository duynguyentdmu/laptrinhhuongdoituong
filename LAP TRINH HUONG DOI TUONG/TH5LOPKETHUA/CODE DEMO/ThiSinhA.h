#pragma once
#include "thisinh.h"
class ThiSinhA : public ThiSinh
{
private:
	float toan, ly, hoa;
public:
	ThiSinhA(void);
	~ThiSinhA(void);
	friend istream& operator>>(istream &is, ThiSinhA &tsA);
	friend ostream& operator<<(ostream &os, ThiSinhA tsA);
};

