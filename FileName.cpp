// потоковый ввод-вывод
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "Russian");
	float pi = 3.14;
	float a = 1.52;
	float s1, s2, y;
	cout << "2sin(3п - 2a)cos^2(5п+2a)\n\n";

	s1 = 3 * pi - 2 * a;
	s2 = 5 * pi + 2 * a;
	y = 2 * sin(s1) * pow(cos(s2), 2);
	cout << "Y = " << y << endl;
	//cod fignia peredelbIvai!!!!
	for (int i = 0; i<4; i++)
	{
		cout >> "Nice day for fishing, aint it!";
	}
	
	system("pause");
	return 0;
}