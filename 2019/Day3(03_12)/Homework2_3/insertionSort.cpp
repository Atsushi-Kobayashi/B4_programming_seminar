#include <iostream>
#include <array>
const int SIZE = 5;

void insertionSort(int *arr) {
	int i, j;
	for (i = 1; i < SIZE; ++i) {
		for (j=i;j>0;--j)
		{
			if (arr[j - 1] > arr[j]) {
				int tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
			else {
				break;
			}
		}
	}
	
}


int main() {

	int *array = new int[SIZE];
	for (int i = 0; i < SIZE; ++i) {
		std::cin >> array[i];
	}

	insertionSort(array);
	std::cout << "ƒ\[ƒgŒ‹‰Ê: \n";
	for (int i = 0; i < SIZE; ++i) {
		std::cout << array[i] << "  ";

	}
	std::cout << "\n";

	delete[] array;

	system("pause");
	return 0;
}