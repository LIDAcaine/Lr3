#pragma once
#include "Array.h"
class Bin :public Array {
public:
	Bin(); //����������� ��� ����������
	Bin(int n); //����������� � ����� ����������
	virtual ~Bin(); //����������
	void print();
	Bin& operator=(const Array& source);
	void trans_2(Bin& source);
};