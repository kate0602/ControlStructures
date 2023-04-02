#include <iostream>
using namespace std;
//#ifdef WHILE_1
//#ifdef WHILE_2
#include <conio.h>

void main()
{
	setlocale(LC_ALL, "ru");
#ifdef WHILE_1

#endif 
#ifdef WHILE_2
		int n;
	cout << "Введите количество итерации"; cin >> n;
	while (--n)
#endif

	char key;
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;

	} while (key!=27);

	}

