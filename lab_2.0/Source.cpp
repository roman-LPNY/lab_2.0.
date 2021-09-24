// Lab_2.0.cpp
// < Костюшко Роман >
// Лабораторна робота № 2.0.
// Системи контролю версій
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // число пі
	double a;// вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "a = "; cin >> a;
	z1 = (pow(cos((3. / 8 * Pi) - (a / 4)), 2) - pow(cos((11. / 8 * Pi) + (a / 4)), 2));
	z2 = ((sqrt(2) / 2) * sin(a / 2));
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	return 0;
}