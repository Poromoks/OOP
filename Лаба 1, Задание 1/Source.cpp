#include <iostream>
using namespace std;

int* genRandArray(int size, int maxValue) {
	int* a = new int[size];
	a[0] = size;
	int i;
	srand(time(0)); // инициализация генерации случайных чисел
	for (i = 1; i < size; i++)
		a[i] = rand() % maxValue; //генерируем целый случайный массив из size элементов от 1 до maxValue
	return a;
}

void print(int* arr) {
	cout << arr[0] - 1 << ": ";
	for (int i = 1; i < arr[0]; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main() {
	setlocale(0, "");
	srand(time(0));
	int size = 1 + rand() % 10;
	int maxValue = 100;
	int* arr = genRandArray(size, maxValue);
	print(arr);
	delete arr;
	system("pause");
	return 0;
}