#pragma once
#include <iostream>
class Array
{
public:
    int* arr;
    int N;
    Array(); //����������� ��� ����������
    Array(int n); //����������� � ����� ����������
    Array(const Array& source); //����������� �����������
    ~Array(); //����������
    int getsize(); //����������� ������� �������
    void print(); //�������� ������
    void file();
    void file_out();
    Array& operator=(const Array& source);
};