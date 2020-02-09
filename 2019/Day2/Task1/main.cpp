#include <iostream>
#include <string>
#include <array>
#include <vector>

int main() {
	const int size=9;
	std::array<std::array<int,size>, size>results;
	std::array<int, size*size>results_1;

	//2D array
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			results[i][j]=(i+1)*(j+1);
		}
	}
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			std::cout.width(3);
			//fillは''でないとダメらしい？
			std::cout.fill(' ');
			std::cout << results[i][j];
		}
		std::cout << "\n";
	}

	//1D array
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			results_1[i*size+j] = (i + 1)*(j + 1);
		}
	}
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size; ++j) {
			std::cout.width(3);
			//fillは''でないとダメらしい？
			std::cout.fill(' ');
			std::cout << results_1[i*size + j];
		}
		std::cout << "\n";
	}
	system("pause");
	return 0;
}
