#include"util.h"

//include�̂����C<cmath>�Ȃǂ͎���̃w�b�_���O�ɒu���K�v������
//���Ȃ݂ɂ���#include"util.h"�͏����Ȃ��Ă��������C�l�ɂ킩��₷�����邽�ߏ���

bool isIntersect(std::array<double, DIM> x_1, std::array<double, DIM> x_2, double r_1, double r_2) {
	double SCD = ((x_1[0] - x_2[0])*(x_1[0] - x_2[0]) + (x_1[1] - x_2[1])*(x_1[1] - x_2[1]) + (x_1[2] - x_2[2])*(x_1[2] - x_2[2]));

	return SCD <= (r_1 + r_2)*(r_1 + r_2);

}