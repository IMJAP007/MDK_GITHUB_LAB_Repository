#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "Rus");
	double x, eps, n = 1;
	cout << "                 x^3      x^5    x^7                   " << endl;
	cout << "arctg (x) = x - ----- + ----- - ----- + ...    |x| < 1 " << endl;
	cout << "                  3       5       7                    " << endl << endl;
	cout << "Введите значение x: ";
	cin >> x;
	double a, F = 0;
	cout << "Введите значение eps: ";
	cin >> eps;
	cout << endl << endl;
	do
	{
		a = pow(-1, n - 1)*((pow(x, 2 * n - 1)) / (2 * n - 1));
		F = F + a;
		n = n + 1;
	} while (fabs(a) >= eps);
	cout << "Приближенное значение arctg x = " << F << endl;
	cout << "Точное значение arctg x = " << atan(x) << endl << endl;
	
	while (true) {
		cout << "Mine!";
	}
	
	if (true){
		x++;
	}

	system("pause");
	return 0;
}

/*
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "Rus");
	double x, eps, n = 1;
	cout << "                 x^3      x^5    x^7                   " << endl;
	cout << "arctg (x) = x - ----- + ----- - ----- + ...    |x| < 1 " << endl;
	cout << "                  3       5       7                    " << endl << endl;
	cout << "Введите значение x: ";
	cin >> x;
	double a = x, F = 0;
	cout << "Введите значение eps: ";
	cin >> eps;
	cout << endl << endl;
	while (fabs(a) >= eps)
	{
		a = pow(-1, n-1)*((pow(x, 2*n-1))/(2 * n - 1));
		F = F + a;
		n = n + 1;
	}
	cout << "Приближенное значение arctg x = " << F << endl;
	cout << "Точное значение arctg x = " << atan(x) << endl << endl;

	system("pause");
	return 0;
}*/