#include <iostream>
#include <array>
const int demention = 3;

// bool関数ならIs,has,...などすぐわかる関数名をつける ex. Isintersect()とか
bool crossing_detecion(std::array<double, demention> x_1, std::array<double, demention> x_2, double r_1, double r_2) {
	double SCD = ((x_1[0] - x_2[0])*(x_1[0] - x_2[0]) + (x_1[1] - x_2[1])*(x_1[1] - x_2[1]) + (x_1[2] - x_2[2])*(x_1[2] - x_2[2]));
	//std::cout<< SCD <<"\n";
	//std::cout << (r_1 + r_2)*(r_1 + r_2) << "\n";

	return SCD <= (r_1 + r_2)*(r_1 + r_2);
	/*if (SCD <= (r_1 + r_2)*(r_1 + r_2)) {
		return true;
	}
	else {
		return false;
	}
*/
}

	int main() {
		std::array<double, demention> x_1, x_2;
		double r_1,r_2;
		std::cout << "1つ目の球の中心座標を入力してください：\n";
		for (int i = 0; i < demention; ++i) {
			std::cin >> x_1[i];
		}

		std::cout << "1つ目の球の半径をを入力してください：\n";
		std::cin >> r_1;
		std::cout << "2つ目の球の中心座標を入力してください：\n";
		for (int i = 0; i < demention; ++i) {
			std::cin >> x_2[i];
		}
		std::cout << "2つ目の球の半径を入力してください：\n";
		std::cin >> r_2;

		if (crossing_detecion(x_1, x_2, r_1, r_2) == true) {
			std::cout << "交差しました\n";
		}
		else {
			std::cout << "交差しませんでした\n";
		}
		system("pause");
		return 0;
	}