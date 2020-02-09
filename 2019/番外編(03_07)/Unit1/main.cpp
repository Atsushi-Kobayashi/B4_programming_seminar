#include <iostream>
#include <array>


//変数名表記について

//UPPERCASE:コード中変わらない定数
//PascalCase:?
//camelCase:関数名（人によっては変数名もこれにするらしい）
//snake_case:その他，変数名とか
constexpr int DIM = 3;

bool crossing_detecion(std::array<double, DIM> x_1, std::array<double, > x_2, double r_1, double r_2) {
	double SCD = ((x_1[0] - x_2[0])*(x_1[0] - x_2[0]) + (x_1[1] - x_2[1])*(x_1[1] - x_2[1]) + (x_1[2] - x_2[2])*(x_1[2] - x_2[2]));
}



int main() {
	
	std::array<int, DIM> arr = { 0,5,3 };
	// vectorに normal_vecとか型の名前を付けない
	//ポインタはポインタだとわかるよう名づける
	std::array<double, DIM> normal = { 0,5,3 };

	system("pause");
	return 0;
}

