#include <iostream>
#include <array>
#include <time.h>
using namespace std;
int main()
{
	system("chcp 1251 > nul");
	array <int, 10> mass;
	int max_number, min_number;
	srand(time(NULL));
	cout << "Сгенерований масив чисел: ";
	for (int a = 0; a < mass.size(); a++)
	{
		mass[a] = rand() % 20;
		if (a == 0)
		{
			max_number = mass[a];
			min_number = mass[a];
		}
		if (mass[a] > max_number)
		{
			max_number = mass[a];
		}
		if (mass[a] < min_number)
		{
			min_number = mass[a];
		}
		cout << mass[a] << " ";
	}
	cout << endl;
	cout << "Максимальне число масиву: " << max_number << endl << "Мінімальне число масиву: " << min_number;
	
}