#include <iostream>
#include <array>

#include"util.h"

//�t�@�C�������ɂ���
//�R���p�C���ƃ����N
//�t�@�C���������ɂ͏z�Q�Ƃɒ���

int main() {
	std::array<double, DIM> x_1, x_2;
	double r_1, r_2;
	std::cout << "1�ڂ̋��̒��S���W����͂��Ă��������F\n";
	for (int i = 0; i < DIM; ++i) {
		std::cin >> x_1[i];
	}

	std::cout << "1�ڂ̋��̔��a������͂��Ă��������F\n";
	std::cin >> r_1;
	std::cout << "2�ڂ̋��̒��S���W����͂��Ă��������F\n";
	for (int i = 0; i < DIM; ++i) {
		std::cin >> x_2[i];
	}
	std::cout << "2�ڂ̋��̔��a����͂��Ă��������F\n";
	std::cin >> r_2;

	if (IsIntersect(x_1, x_2, r_1, r_2) == true) {
		std::cout << "�������܂���\n";
	}
	else {
		std::cout << "�������܂���ł���\n";
	}
	system("pause");
	return 0;
}