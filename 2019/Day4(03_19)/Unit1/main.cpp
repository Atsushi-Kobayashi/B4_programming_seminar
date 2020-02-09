#include <string>
#include"Dragon.h"
#include<array>
#include<vector>
#include<memory>
#include<iostream>
const int SIZE = 3;
/*
void printAverageAge(std::vector<std::unique_ptr<Dragon>> &dragons) {
	int avr = 0;
	for (int i = 0; i < dragons.size(); ++i) {
		avr +=dragons[i]->getAge();
	}
	std::cout<<"Average: "<< (double)avr/SIZE << "\n";

*（消えたので再びメモ）メンバ変数の多いクラスはメモリを多く消費するため，
いかに値渡しをせずに進めるかが重要になる。ユニークポインタを用いると初期化時も
コピーを使わずに初期化できる。
*vecで，新規追加の時はpush_backよりもemplace_backのほうがいいらしい

}
*/
int main() {
	std::array<double, SIZE> pos_x_arr = {2,4,6};
	std::array<double, SIZE> pos_y_arr = {3,1,4};
	std::vector<Dragon> dragons;

	for (int i = 0; i < SIZE; ++i) {
		dragons.emplace_back(pos_x_arr[i], pos_y_arr[i]);
	}

	for (int i = 0; i < SIZE; ++i) {
		dragons[i].printHP();
		dragons[i].printPos();
	}
	system("pause");
	return 0;
}
