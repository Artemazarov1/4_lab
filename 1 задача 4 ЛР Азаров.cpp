#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");

	int kolichpeople;
	cout << "Введите количество посетителей: ";
	cin >> kolichpeople;

	int maxyear = -1;
	int minyear = -1;
	int result = 0; 

	for (int i = 0; i < kolichpeople; ++i) 
	{
		int age;
		cout << "введите возраст посетителя " << i + 1 << ": ";
		cin >> age;

		if (maxyear == -1 || age > maxyear) {
			maxyear = age;
		}
		if (minyear == -1 || age < minyear) {
			minyear = age;
		}

		result += age;     
	}

	double avg_age = result / kolichpeople;

	cout << "самому старшему посетителю: " << maxyear << " лет" << endl;
	cout << "самому младшему посетителю: " << minyear << " лет" << endl;
	cout << "средний возраст посетителя: " << avg_age << " лет" << endl;

	return 0;
}