#include<iostream>
using namespace std;



void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "¬ведите количество строк : "; cin >> n;

	for(int i = 1; i <= n; i++)
    {
        int a = 1; 
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a = a * (i - j) / j;
        }
        cout << "\n";
    }
}




