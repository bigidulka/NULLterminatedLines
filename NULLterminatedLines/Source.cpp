#include<iostream>
#include<Windows.h>
#include<cmath>
using namespace std;

int StrLen(char str[]);
void to_upper(char str[]);
void to_lower(char str[]);
void shrink(char str[], const int n); // ������� ������� �� �����������
bool is_palindrome(char str[], const int n);	//����������, �������� �� ������ �����������
bool is_int_number(char str[]);	//����������, �������� �� ������ ����� ������
int  to_int_number(char str[]);	//���� ������ �������� ����� ������, �� ���������� ��� �������� ��������
bool is_bin_number(char str[]);	//���������, �������� �� ������ �������� ������
int  bin_to_dec(char str[]);	//���� ������ �������� �������� ������, ���������� ��� ���������� ��������
bool is_hex_number(char str[]);	//���������, �������� �� ������ ����������������� ������
int  hex_to_dec(char str[]);	//���� ������ �������� ���������������� ������, ���������� ��� ���������� ��������

void main()
{
	setlocale(0, "");
	//char sz_str[] = { 'H', 'e', 'l', 'l', 'o', 0 }; //sz_ - string zero
	//char sz_str[] = "Hello";
	//cout << sz_str << endl;
	const int n = 20;
	char sz_str[n] = {};
	//cin >> sz_str;
	//cout << sz_str << endl;
	//cout << sizeof(sz_str) << endl;
	//cout << StrLen(sz_str) << endl;
	//cout << "������� ������ ��� �������� ��������: ";
	//SetConsoleCP(1251);
	//cin.getline(sz_str, n);
	//SetConsoleCP(866);
	//to_upper(sz_str);
	//cout << sz_str << endl;
	//cout << "������� ������ ��� ������� ��������: ";
	//SetConsoleCP(1251);
	//cin.getline(sz_str, n);
	//SetConsoleCP(866);
	//to_lower(sz_str);
	//cout << sz_str << endl;

	//���������
	/*cout << "������� ������: ";
	SetConsoleCP(1251);
	cin.getline(sz_str, n);
	SetConsoleCP(866);
	cout << sz_str << endl;
	if (is_palindrome(sz_str, n)) cout << "Pravilno" << endl;
	else cout << "NePravilno" << endl;*/

	//Int �����
	//cout << "������� �����: ";
	//SetConsoleCP(1251);
	//cin.getline(sz_str, n);
	//SetConsoleCP(866);
	//cout << sz_str << endl;
	//if (is_int_number(sz_str)) cout << "Pravilno" << endl;
	//else cout << "NePravilno" << endl;
	//cout << to_int_number(sz_str);
	
	//�������� �������
	//cout << "������� �����: ";
	//SetConsoleCP(1251);
	//cin.getline(sz_str, n);
	//SetConsoleCP(866);
	//cout << "����� ��������: "<< is_bin_number(sz_str) << endl;
	//cout << "���������� �������: "<< bin_to_dec(sz_str) << endl;

	//���������������� �������
	//cout << "������� �����: ";
	//SetConsoleCP(1251);
	//cin.getline(sz_str, n);
	//SetConsoleCP(866);
	//cout << "����� ����������������: " << is_hex_number(sz_str) << endl;
	//cout << "���������� �������: " << hex_to_dec(sz_str) << endl;

	//Shrink
	/*cout << "������� �����: ";
	SetConsoleCP(1251);
	cin.getline(sz_str, n);
	SetConsoleCP(866);
	shrink(sz_str, n);*/
}	
void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z') str[i] -= ' ';
		if (str[i] >= '�' && str[i] <= '�') str[i] -= ' ';
	}
}
void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z') str[i] += ' ';
		if (str[i] >= '�' && str[i] <= '�') str[i] += ' ';
	}
}
void shrink(char str[], const int n)
{
	string buffer;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] != ' ')
		{
			buffer += str[i];
		}
	}
	cout << "����� ��� ��������: " << buffer << endl;
}

int StrLen(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}
bool is_palindrome(char str[], const int n)
{
	bool is_palindrom = true;
	int len = 0;
	for (int i = 0; str[i]; i++)
	{
		len++;
	}
	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] != str[len - i - 1])
		{
			is_palindrom = false;
		}
	}
	return is_palindrom;
}
bool is_int_number(char str[])
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9')) return false;
	}
	return true;
}
int to_int_number(char str[])
{
	int buffer = 0;
	if (is_int_number(str))
	{
		return buffer = atoi(str);
	}
	return false;
}
bool is_bin_number(char str[])
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (!(str[i] == '1' || str[i] == '0')) return false;
	}
	return true;
}
int bin_to_dec(char str[])
{
	int buffer = 0;
	if (is_bin_number(str))
	{
		for (int i = strlen(str) - 1; i > -1; i--)
		{
			if (str[i] == '1') buffer += pow(2, strlen(str) - (i + 1));
		}
	}
	return buffer;
}
bool is_hex_number(char str[])
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (!((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f'))) return false;
	}
	return true;
}
int CharToInt(char str)
{
	if (str >= '0' && str <= '9')
		return str - '0';
	else if (str >= 'A' && str <= 'F')
		return str - 'A' + 10;
	else if (str >= 'a' && str <= 'f')
		return str - 'a' + 10;
	return 0;
}
int hex_to_dec(char str[])
{
	int buffer = 0;
	for (int j = 0, i = strlen(str) - 1; j < strlen(str); j++, i--)
	{
		buffer += CharToInt(str[j]) * pow(16, i);
	}
	return buffer;
}