#include <iostream>
#include <array>
const int SIZE = 5;

int choosePivot(int *arr,int left, int right) {
	return arr[(left+right)/2];
	//ピボットの選択　ここでは真ん中の位置の値をピボットとする
}

void quickSort(int *arr, int begin_num,int end_num) {
	int i = begin_num;
	int j = end_num;
	int tmp;
	int pivot = choosePivot(arr,begin_num,end_num);

	while (true) {
		while (arr[i] < pivot) { ++i; }
		while (arr[j] > pivot) { --j; }
		if (i >= j) { break; }
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		++i;
		--j;
	}

	if (begin_num < i-1) {
		quickSort(arr, begin_num, i - 1);
	}
	if (j+1< end_num) {
		quickSort(arr, j + 1, end_num);
	}
}


int main() {

	int *array = new int[SIZE];
	int begin = 0;
	int end = SIZE - 1;
	for (int i = 0; i < SIZE; ++i) {
		std::cin >> array[i];
	}

	quickSort(array, begin,end);
	std::cout << "ソート結果: \n";
	for (int i = 0; i < SIZE; ++i) {
		std::cout << array[i] << "  ";

	}
	std::cout << "\n";

	delete[] array;

	system("pause");
	return 0;
}