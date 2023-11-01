#include <iostream>
#include <iomanip>
#include <Windows.h> 
using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
}
double arithmeticmean(int* a, const int size, int currentIndex = 0, double currentSum = 0, int currentCount = 0)
{
	if (currentIndex >= size) {
		if (currentCount == 0) {
			return 0.0; // У випадку, коли немає непарних елементів
		}

		return currentSum / currentCount; // Повертаємо середнє арифметичне
	}

	if (a[currentIndex] % 2 != 0) { // Перевірка на непарність
		return arithmeticmean(a, size, currentIndex + 1, currentSum + a[currentIndex], currentCount + 1);
	}
	else {
		return arithmeticmean(a, size, currentIndex + 1, currentSum, currentCount);
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Low = -20;
	int High = 30;
	Create(a, n, Low, High, 0);
	cout << "Масив = [ "; Print(a, n, 0);cout << "  ]" << endl;
	double average = arithmeticmean(a, n);
	cout << "Середнє арифметичне непарних елементів =  " << average << endl;
	return 0;
}