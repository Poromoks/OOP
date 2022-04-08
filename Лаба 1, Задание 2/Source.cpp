#include <iostream>
using namespace std;

int** genRandMatrix(int size, int maxValue) {
	int** matrix = new int*[size];
	srand(time(0)); // инициализация генерации случайных чисел
	for (int i = 0; i < size; i++) {
		matrix[i] = new int[size];
		int size = 1 + rand() % 10;
		matrix[i][0] = size;
		for (int j = 1; j < size; j++) {
			matrix[i][j] = rand() % maxValue;
		}
	}
	return matrix;
}

void print(int** matrix, int line) {
	cout << line << endl;
	for (int i = 0; i < line; i++) {
		cout << matrix[i][0] - 1 << ": ";
		for (int j = 1; j < matrix[i][0]; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}


int main() {
	setlocale(0, "");
	srand(time(0));
	int size = 1 + rand() % 10;
	int line = size;
	int maxValue = 100;
	int** matrix = genRandMatrix(size, maxValue);
	print(matrix, line);
	delete matrix;
	system("pause");
	return 0;
}