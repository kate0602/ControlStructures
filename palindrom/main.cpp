#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	cout << "Hello Palindrom" << endl;

	int number; //число с клавиатуры
	int reverse = 0;// число, наоборот
	cout << "Введите число:"; cin >> number;
	int copy = number; // копируем значение number, и в процессе будем изменять
	while (copy)
	{
		reverse *= 10;// Освобождаем место для след разряда
		reverse += copy % 10; // сохраняем младший разряд числа
		copy /= 10; //убираем младший разряд


	}
	cout << number << endl;
	cout << reverse << endl;
	if (reverse == number)
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Обычное число" << endl;
	}
}