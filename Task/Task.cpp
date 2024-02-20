#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int ishod, ishod_d, c1, c2, c3, c4, new_c = 0;
	setlocale(LC_ALL, "Rus");

	cout << "Введите номер билета, состоящий строго из 4 цифр: ";
	cin >> ishod;
	ishod_d = ishod;

	if ((ishod < 1000) || (ishod >= 10000))
	{
		cout << "Вы ввели не четырехзначное число. Программа закончена";
	}
	else
	{
		c4 = ishod % 10;
		ishod /= 10;
		c3 = ishod % 10;
		ishod /= 10;
		c2 = ishod % 10;
		ishod /= 10;
		c1 = ishod % 10;
		new_c = c2 * 1000 + c1 * 100 + c4 * 10 + c3;

		cout << "Искходное число " << ishod_d << ", а новое число " << new_c;
	}

	return 0;
}
