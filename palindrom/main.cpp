#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	cout << "Hello Palindrom" << endl;

	int number; //����� � ����������
	int reverse = 0;// �����, ��������
	cout << "������� �����:"; cin >> number;
	int copy = number; // �������� �������� number, � � �������� ����� ��������
	while (copy)
	{
		reverse *= 10;// ����������� ����� ��� ���� �������
		reverse += copy % 10; // ��������� ������� ������ �����
		copy /= 10; //������� ������� ������


	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "���������" << endl;
	}
	else
	{
		cout << "������� �����" << endl;
	}
}