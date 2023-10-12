#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	char station;

	cout << "Введите букву станции A B C D или E: ";
	cin >> station;

	switch (station)
	{
	case 'a':
	case 'A':
		cout << "От станции А до станции В 23 минуты.";
		break;

	case 'b':
	case 'B':
		cout << "От станции B до станции C 21 минута.";
		break;

	case 'c':
	case 'C':
		cout << "От станции C до станции D 28 минут.";
		break;

	case 'd':
	case 'D':
		cout << "От станции D до станции E 27 минут.";
		break;

	case 'e':
	case 'E':
		cout << "Конечная.";
		break;
	default:

		cout << "Ошибка";
		break;

		return 0;
	}
}