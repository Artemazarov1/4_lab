#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int palec;
	cout << "Выберите и введите номер пальца от 1 до 5: ";
	cin >> palec;

	if (palec == 1)
	{
		cout << "Большой палец";
	}
	else if (palec == 2)
	{
		cout << "Указательный палец";
	}
	else if (palec == 3)
	{
		cout << "Средний палец";
	}
	else if (palec == 4)
	{
		cout << "Безымянный палец";
	}
	else if (palec == 5)
	{
		cout << "Мизинец";
	}
	else if (palec < 1)
	{
		cout << "Такого пальца нет";
	}
	else if (palec > 5)
	{
		cout << "Такого пальца нет";
	}

	return 0;
}