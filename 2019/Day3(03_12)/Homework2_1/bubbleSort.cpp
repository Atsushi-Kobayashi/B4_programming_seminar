#include <iostream>
#include <array>
const int SIZE = 5;

void bubbleSort(int *arr) {
	for (int i = 0; i < SIZE - 1; ++i) {
		for (int j = SIZE - 1; j > i; --j) {
			if (arr[j - 1] > arr[j]) {
				int tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}


int main() {

	int *array = new int[SIZE];
	for (int i = 0; i < SIZE; ++i) {
		std::cin >> array[i];

	}

	bubbleSort(array);
	std::cout << "ƒ\[ƒgŒ‹‰Ê: \n";
	for (int i = 0; i < SIZE; ++i) {
		std::cout << array[i] << "  ";

	}
	std::cout << "\n";
	delete[] array;

	system("pause");
	return 0;
}