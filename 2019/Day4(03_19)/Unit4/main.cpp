#include<array>
#include<vector>
#include<memory>
#include<iostream>

#include"HighDragon.h"
#include"Dragon.h"

const int SIZE = 3;

int main() {
	std::array<double, SIZE> pos_x_arr = { 2,4,6 };
	std::array<double, SIZE> pos_y_arr = { 3,1,4 };
	std::vector<std::unique_ptr<Dragon>> dragons;

	for (int i = 0; i < SIZE; ++i) {
		dragons.emplace_back(new Dragon(pos_x_arr[i], pos_y_arr[i]));
	}
	dragons.emplace_back(new HighDragon(0,0));

	for (int i = 0; i < dragons.size(); ++i) {
		dragons[i]->printHP();
		dragons[i]->printPos();
	}
	system("pause");
	return 0;
}
