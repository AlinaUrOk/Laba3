// Laba_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

/*19. 	(*) Дано функцію f(x,y). Вивести на екран функцію g(x)=∫_a^b▒〖f(x,y)〗 dy*/
#include <iostream>
using namespace std;
int main()
{
	cout << "function f(x;y)=x^2-4xy";
	long double g, Integral, a, b, f1, f2;
	cout << "enter the limits " << endl;
	cout << "a:";
	cin >> a;
	cout<< "b:";
	cin >> b;
	cout << "Integral: x^2 - 4xy^2/2 dy"<< endl;
	f1 =  4*(pow(b, 2)) /2;
	f2 =  4*(pow(a, 2)) / 2 ;
	Integral = f1 - f2;
	cout << "g(x):x^2-(" << Integral << "x)";
	return a;
}