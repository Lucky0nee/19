#include <iostream>
#include <array>
#include <random>

using namespace std;

int main() {
	srand(time(NULL));
	const int size = 10;
	array <int, size> arr{ };
	int найбільше = arr[0];
	int найменше = arr[0];
	int temp = arr[0];

	// Масив
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 100 - 50;

	// Найбільше
	for (int i = 0; i < size; i++)
		if (arr[i] > temp)
			temp = arr[i];
	найбільше = temp;

	// Найменше
	for (int i = 0; i < size; i++)
		if (arr[i] < temp)
			temp = arr[i];
	найменше = temp;


	cout << "Масив: ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << "\nНайбільше: " << найбільше << "\n";
	cout << "Найменше: " << найменше << "\n";
	return 0;
}
/*
Створіть масив цілих чисел.А також дві змінні:
int найбільше = масив[0];
int найменше = масив[0];
Використайте їх, щоб знайти найменший і найбільший елемент масива.Вхідний
масив, його найменше і найбільше значення видайте на екран.
*/
