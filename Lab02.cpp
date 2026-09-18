// Lab_02.cpp
// < Кальчук Арсеній >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 6
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x; // вхідний параметр
	//double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	double z1; // результат обчислення 1-го виразу
	//double z2; // результат обчислення 2-го виразу
	cout << "Vvedit x = "; cin >> x;
	z1 = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
	z2 = 4 * cos(x / 2.0) * cos((5.0 / 2) * x) * cos(4 * x);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;


	cin.get();
	cin.get();
	return 0;
}
