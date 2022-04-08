#include <iostream>
using namespace std;

int** genRandMatrix(int c) {
	int** arr = new int* [c];
	srand(time(0));
	for (int i = 0; i < c; i++) {
		arr[i] = new int[c];
		for (int j = 0; j < c; j++) {
			arr[i][j] = 11 + rand() % 80; // заполним массив случайным числами от 10 до 90
		}
	}
	return arr;
}

void printMatrix(int** arr, int c) {
	cout << "Созданная матрица: " << endl;
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < c; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void taskA(int** arr, int c) {
	int* D = new int[c * c];
	int q = 0;
	cout << "Задание A:" << endl;
	for (int j = c - 1; j >= 0; j--) {
		for (int i = 0; i < c; i++) {
			if (j + i <= c - 1) {
				D[q++] = arr[i][j + i];
			}
		}
	}
	for (int x = c - 1; x >= 0; x--) {
		for (int i = c - x; i < c; i++) {
			for (int j = 0; j <= c - 1; j++) {
				if (i - j == c - x) {
					D[q++] = arr[i][j];
				}
			}
		}
	}
	for (int i = 0; i < q; i++)
		cout << D[i] << " ";
	cout << endl << endl;
	delete D;
}

void taskB(int** arr, int c) {
	int* D = new int[c * c];
	int q = 0;
	cout << "Задание B:" << endl;
	for (int j = 0; j < c; j++) {
		for (int i = 0; i < c; i++) {
			if (j - i >= 0) {
				D[q++] = arr[i][j - i];
			}
		}
	}
	for (int x = 0; x < c - 1; x++) {
		for (int i = 1 + x; i < c; i++) {
			for (int j = c - 1; j > 0; j--) {
				if (j + i == c + x) {
					D[q++] = arr[i][j];
				}
			}
		}
	}
	for (int i = 0; i < q; i++)
		cout << D[i] << " ";
	cout << endl << endl;
	delete D;
}

void taskC(int** arr, int c) {
	int* D = new int[c * c];
	int q = 0;
	cout << "Задание C:" << endl;
	int i = c / 2;
	int j = c / 2;
	int z = 0;
	if (c % 2 == 0) {
		j--;
		do {
			z++;
			for (int k = 0; k < z; k++)
				D[q++] = arr[i][j++];
			if (z == c)
				break;
			for (int k = 0; k < z; k++)
				D[q++] = arr[i--][j];
			z++;
			for (int k = 0; k < z; k++)
				D[q++] = arr[i][j--];
			if (z == c)
				break;
			for (int k = 0; k < z; k++)
				D[q++] = arr[i++][j];
		} while (z);
	}
	else do {
		z++;
		for (int k = 0; k < z; k++)
			D[q++] = arr[i][j++];
		if (z == c)
			break;
		for (int k = 0; k < z; k++)
			D[q++] = arr[i--][j];
		z++;
		for (int k = 0; k < z; k++)
			D[q++] = arr[i][j--];
		if (z == c)
			break;
		for (int k = 0; k < z; k++)
			D[q++] = arr[i++][j];
	} while (z);
	for (int i = 0; i < q; i++)
		cout << D[i] << " ";
	cout << endl << endl;
	cout << "Задание D:" << endl;
	for (int i = q - 1; i >= 0; i--)
		cout << D[i] << " ";
	cout << endl << endl;
	delete D;
}

int main() {
	setlocale(0, "");
	int c = 0;
	cout << "Введите размер матрицы: ";
	cin >> c;
	int** arr = genRandMatrix(c);
	printMatrix(arr, c);
	taskA(arr, c);
	taskB(arr, c);
	taskC(arr, c);
	delete arr;
	system("pause");
	return 0;
}