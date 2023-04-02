#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGEL_1
//#define TRIANGEL_2
//#define TRIANGEL_3
//#define TRIANGEL_4
//#define ROMB
//#define PLUS_MINUS



void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите количество звездочек: "; cin >> n;

#ifdef SQUARE


	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
}
#endif  //SQUARE


#ifdef TRIANGEL_1
for (int i = 0; i < n; i++)
{
	for (int j = 0; j <= i; j++)
	{
		cout << "* ";
	}
	cout << endl;
}
#endif //TRIANGEL_1

#ifdef TRIANGEL_2
for (int i = 0; i < n; i++)
{
	for (int j = i; j < n; j++)
	{
		cout << "* ";
	}
	cout << endl;
}
#endif //TRIANGEL_2

#ifdef TRIANGEL_3

for (int i = 0; i < n; i++)
{
	for (int j = 0; j < i; j++)cout << "  ";
	for (int j = i; j < n; j++)cout << "* ";
	
	cout << endl;
}
#endif //TRIANGEL_3


#ifdef TRIANGEL_4

for (int i = 0; i < n; i++)
{
	for (int j = i; j < n -1; j++)cout << "  ";
	for (int j = 0; j <= i; j++)cout << "* ";

	cout << endl;
}
#endif //TRIANGEL_4

#ifdef ROMB

for (int i = 0; i < n; i++)
{
	for (int j = i; j < n; j++)cout << " "; cout << "/";
	for (int j = 0; j < i*2; j++)cout << " ";cout <<"\\";
cout << endl;
}
for (int i = 0; i < n; i++)
{
	for (int j = 0; j < i+1; j++)cout << " "; cout << "\\";
	for (int j = 0; j < (n-i-1)*2; j++)cout << " "; cout << "/";
	cout << endl;
}

#endif //ROMB


#ifdef PLUS_MINUS

for (int i = 0; i < n; i++)
{
	for (int j = 0; j < n; j++)
	{
		//if ((j+i) % 2 == 0)cout << "+";else cout << "- ";
		//if (i % 2 == j % 2)cout << "+ "; else cout << "- ";
		//(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
		cout << (i % 2 == j % 2 ? "+ " : "- ");
		
	}
	cout << endl;
}
#endif //PLUS_MINU



}




