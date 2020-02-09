#include <iostream>
#include <array>

#include"util.h"

//ファイル分割について
//コンパイルとリンク
//ファイル分割時には循環参照に注意

int main() {
	std::array<double, DIM> x_1, x_2;
	double r_1, r_2;
	std::cout << "1つ目の球の中心座標を入力してください：\n";
	for (int i = 0; i < DIM; ++i) {
		std::cin >> x_1[i];
	}

	std::cout << "1つ目の球の半径をを入力してください：\n";
	std::cin >> r_1;
	std::cout << "2つ目の球の中心座標を入力してください：\n";
	for (int i = 0; i < DIM; ++i) {
		std::cin >> x_2[i];
	}
	std::cout << "2つ目の球の半径を入力してください：\n";
	std::cin >> r_2;

	if (IsIntersect(x_1, x_2, r_1, r_2) == true) {
		std::cout << "交差しました\n";
	}
	else {
		std::cout << "交差しませんでした\n";
	}
	system("pause");
	return 0;
}