#include <iostream>
#include <array>
const int demention = 3;

// bool�֐��Ȃ�Is,has,...�Ȃǂ����킩��֐��������� ex. Isintersect()�Ƃ�
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
		std::cout << "1�ڂ̋��̒��S���W����͂��Ă��������F\n";
		for (int i = 0; i < demention; ++i) {
			std::cin >> x_1[i];
		}

		std::cout << "1�ڂ̋��̔��a������͂��Ă��������F\n";
		std::cin >> r_1;
		std::cout << "2�ڂ̋��̒��S���W����͂��Ă��������F\n";
		for (int i = 0; i < demention; ++i) {
			std::cin >> x_2[i];
		}
		std::cout << "2�ڂ̋��̔��a����͂��Ă��������F\n";
		std::cin >> r_2;

		if (crossing_detecion(x_1, x_2, r_1, r_2) == true) {
			std::cout << "�������܂���\n";
		}
		else {
			std::cout << "�������܂���ł���\n";
		}
		system("pause");
		return 0;
	}