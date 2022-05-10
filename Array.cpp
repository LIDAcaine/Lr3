#include "Array.h"
#include <iostream>
#include <fstream>
#include <locale>
using namespace std;
Array:: Array() //����������� ��� ����������
{
    N = 0;
    arr = new int[N];
    for (int i = 0; i < N; i++)
        arr[i] = 0;
}
Array::Array(int n) //����������� � ����� ����������
{
    N = n;
    arr = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
}
void Array::file()
{
    ifstream in_file;          
    in_file.open("Masssive.txt"); 
    while (!in_file.eof())
    {                   
        in_file >> arr[N];
        N++;      
    }
    in_file.close();
}
void Array::file_out()
{
    ofstream in_file;
    int i = 0;
    in_file.open("Masssive.txt");
    while (i<N)
    {
        if (i + 1 == N)
        {
            in_file << arr[i];
            break;
        }
        in_file << arr[i]<<"\n";
        i++;
    }
    in_file.close();
}
Array::Array(const Array& source) //����������� �����������
{
    N = source.N;
    arr = new int[N];
    for (int i = 0; i < N; i++)
        arr[i] = source.arr[i];
    delete[] arr;
}

Array::~Array() {} //����������

int Array:: getsize() //����������� ������� �������
{
    return N;
}

void Array:: print() //�������� ������
{
    for (int i = 0; i < N; i++)
        cout << arr[i] << "  ";
    cout << endl;
}
Array& Array:: operator=(const Array& source)//���������� ���������=
{
    delete[] arr;
    if (this != &source)
    {
        N = source.N;
        arr = new int[N];
        for (int i = 0; i < N; i++)
            arr[i] = source.arr[i];
    }
    return *this;
}