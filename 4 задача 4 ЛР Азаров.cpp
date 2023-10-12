#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int num1;
	int num2;
	int result;
	cout << "Введите первое число: ";
	cin >> num1;
	cout << "Введите второе число: ";
	cin >> num2;
	cout << "Каков результат умножения этих 2 чисел?";
	cin >> result;

	if (result == num1 * num2)
	{
		cout << "Верно, ты молодец!";
	}
	else
	{
		cout << "Неверно.";
	}
	return 0;
}