#include <iostream>
#include "tchar.h"
using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	//������ �������
	_TCHAR arr[50] = _TEXT("Hello#$Wo*rld 1 2 3 4 5 6!");
	wcout << _TEXT("Hello#$Wo*rld 1 2 3 4 5 6!") << endl;
	cout << "\n-------------------1 �������-----------------------\n\n";
	for (int i = 0; i <_tcslen(arr); i++)
	{
		if (arr[i] == ' ')      //������ ������� ��
		{
			arr[i] = '\t';   //��������� 
		}
		wcout << arr[i];
	}


	cout << "\n\n-------------------2 �������-----------------------\n\n";
	//������ �������
	int num = 0, letter = 0, bigletter = 0, symbol = 0;  //���������� ��� �������� 
	for (int i = 0; i < _tcslen(arr); i++)
	{
		if (arr[i] >= 65 && arr[i] <= 90)     //������� ��������� ����
		{
			letter++;
		}
		if (arr[i] >= 97 && arr[i] <= 122)       //������� ��������� ����
		{
			bigletter++;
		}
		if (arr[i] >= 48 && arr[i] <= 57)     //������� ����
		{
			num++;
		}
		if (arr[i] >= 33 && arr[i] <= 47)     //������� ��������
		{
			symbol++;
		}
	}
	wcout << "Count letter: " << letter + bigletter << endl;        //�������� ���� ����
	wcout << "Count number: " << num << endl;
	wcout << "Count symbol: " << symbol << endl;

	//3 �������
	cout << "\n-------------------3 �������-----------------------\n\n";
	int count = 0;        //���������� ��� �������� 
	for (int i = 0; i < _tcslen(arr); i++)
	{
		if (arr[i] >= 0)
		{
			count++;
		}
	}
	cout << "Count word: " << count << endl;


	//5 �������
	cout << "\n-------------------5 �������-----------------------\n\n";
	int count = 0;
	_TCHAR string[50];
	wcout << "Input a sentence in russian: ";
	wcin >> string;
	for (int i = 0; i < _tcslen(string); i++)
	{
		if (string[i] == 160 || string[i] == 165 || string[i] == 168 || string[i] == 169 || string[i] == 174 || string[i] == 179 || string[i] == 186 || string[i] == 187 || string[i] == 188 || string[i] == 189 || string[i] == 190 || string[i] == 191)     //����� �� ������� c �������� �������
		{   
		{
			count++;    //���� � ������ ���� �������, �� ������� �������������
		}

	}
	cout << "Vowels word = " << count << endl;            //����� ���-�� �������


	//6 �������
	cout << "\n-------------------6 �������-----------------------\n\n";
	_TCHAR str[30];
	wcout << "Input polindrom string" << endl;
	wcin >> str;
	int len = _tcslen(str);
	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - i - 1])
		{
			wcout << "Polindrom";
		}
		else
		{
			wcout << "Not ";
		}
	}



	//7 �������
	cout << "\n-------------------7 �������-----------------------\n\n";
	_TCHAR Buffer[5200];
	int w;
	for (int i = 0; i < _tcslen(arr); i++)
	{
		if (arr[i] == 53)
		{
			arr[i] = '\t';
			_tcscpy(arr, Buffer);
		}
		wcout << arr[i];
	}


	//8 �������
	cout << "\n-------------------8 �������-----------------------\n\n";
	_TCHAR Buffer[200];
	for (int i = 0; i < _tcslen(arr); i++)
	{
		if (arr[i] == 121)
		{
			Buffer[i] = '\t';
			_tcscpy(arr, Buffer);
		}
		wcout << arr[i];
	}



	cout << "\n-------------------9 �������-----------------------\n\n";
	_TCHAR Buffer[300];
	for (int i = 0; i < _tcslen(arr); i++)
	{
		if (arr[i] == 53 && arr[i] == 121)
		{
			Buffer[i] = arr[i];
			_tcscpy(arr, Buffer);
		}
		wcout << arr[i];
	}
}
