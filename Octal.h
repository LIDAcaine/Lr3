#pragma once
#include "Array.h"
class Oct :public Array {
public:
	Oct(); //����������� ��� ����������
	Oct(int n); //����������� � ����� ����������
	virtual ~Oct(); //����������
	void print();
	Oct& operator=(const Array& source);
	void trans_8(Oct& source);
};
