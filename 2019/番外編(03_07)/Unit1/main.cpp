#include <iostream>
#include <array>


//�ϐ����\�L�ɂ���

//UPPERCASE:�R�[�h���ς��Ȃ��萔
//PascalCase:?
//camelCase:�֐����i�l�ɂ���Ă͕ϐ���������ɂ���炵���j
//snake_case:���̑��C�ϐ����Ƃ�
constexpr int DIM = 3;

bool crossing_detecion(std::array<double, DIM> x_1, std::array<double, > x_2, double r_1, double r_2) {
	double SCD = ((x_1[0] - x_2[0])*(x_1[0] - x_2[0]) + (x_1[1] - x_2[1])*(x_1[1] - x_2[1]) + (x_1[2] - x_2[2])*(x_1[2] - x_2[2]));
}



int main() {
	
	std::array<int, DIM> arr = { 0,5,3 };
	// vector�� normal_vec�Ƃ��^�̖��O��t���Ȃ�
	//�|�C���^�̓|�C���^���Ƃ킩��悤���Â���
	std::array<double, DIM> normal = { 0,5,3 };

	system("pause");
	return 0;
}

