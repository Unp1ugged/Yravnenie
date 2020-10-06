#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Введите числа a b c" << endl;
	double a, b, c;
	cin >> a >> b >> c;
	double d = b * b - 4 * a * c;
	cout << "d=" << d << endl;

	if (d > 0)
	{
		double x1 = (-b - sqrt(d)) / (2 / a);
		double x2 = (-b + sqrt(d)) / (2 / a);
		cout << "Первый корень уравнения " << x1 << endl;
		cout << "Второй корень уравнения " << x2 << endl;
	}
	else if (d==0)
	{
		double x = (-b) / (2 / a);
		cout << "Единственный корень уравнения " << x << endl;
	}
	else if (d<0)
	{
		cout << "Решений нет" << endl;
	}
	return 0;
}
