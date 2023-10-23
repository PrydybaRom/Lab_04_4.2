// Lab_04_2.cpp
// <Придиба Роман Орестович>
// Лабораторна робота № 4.2
//Табуляція функції, заданої формулою : функція однієї змінної
// Варіант 30

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, A, B, y;
	cout << "xp = "; cin >> xp; // вхідний аргумент
	cout << "xk = "; cin >> xk; // вхідний аргумент
	cout << "dx = "; cin >> dx; // вхідний аргумент
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp; // початкове значення циклу

	// початок циклу:
	while (x <= xk)
	{
		A = (x * x) * cos(x/2);
		if (x < -5)
			B = (x/5) - exp(fabs(x));
		else
			if (-5 <= x <= 0)
				B = (pow(x, 3) / 4) + 1;
			else
				B = 1. / tan(log(x));

		y = A + B; // обчислення у

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}



