// Laba_3_.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*/*12.	Дано різницеве рівняння x_(i+1)=f(i,x_i). Знайти суму перших n його елементів */
#include <iostream>
using namespace std;
int main()
{
	int x, i, v, xi, sum=0;
	cout << "x(i+1)=f(i,xi)  =  x(i+1)=5(i)xi" << endl;
	cout << "enter the limit:";
	cin >> v; '\n';
	cout << "x_i:";
	cin >> xi;
	for (i = 0; i < v; i++)
	{
		x = 5 * i * xi;
		cout << "elements:" << x << endl;
		sum += x;		
	}
	cout << "sum:" << sum;
}
