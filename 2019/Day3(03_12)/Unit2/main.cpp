#include <iostream>
#include <array>
const int SIZE = 4;

void swap(int &i, int &j)
{
	int tmp = i;
	i = j;
	j = tmp;
	//std::cout << "&i:" << &i << ", &j:" << &j << "\n";
}
void bubbleSort(int *arr,int &step) {
	for (int i = 0; i < SIZE - 1; ++i) {
		for (int j=SIZE-1; j>i; --j) {
			step++;
			if (arr[j-1] > arr[j]) {
				swap(arr[j - 1], arr[j]);
			}
		}
	}
}
int main() {


	/*int x = 5;
	int y = 3;*/
	
	//"int x =5;"をより原理的に表現してみる（オブジェクトの生成）
	//int *ptr = new int;
	//intのメモリ領域を確保
	//*ptr = 5;
	//確保したメモリに値を代入


	//std::cout << "*ptr=" << *ptr << "\n";
	//delete ptr;
	//オブジェクトを生成し，使い終わったらdeleteする（メモリを解放）


	int *array = new int[SIZE];
	int step = 0;
	for (int i = 0; i < SIZE; ++i) {
		std::cin >> array[i];

	}

	bubbleSort(array, step);

	for (int i = 0; i < SIZE; ++i) {
		std::cout << array[i] << "  ";

	}
	std::cout << "\n";
	std::cout << step << "\n";
	delete[] array;
	//delete[]: []は配列の要素すべてのメモリを解放する

	system("pause");
	return 0;
}

//宿題1.実装と考察
//宿題2.比較の回数，入れ替え回数，の比較に加え定性的な性質（それぞれ有利な状況，そのときの計算オーダー）