#define _USE_MATH_DEFINES
//���cmath(,iostream)����ɐ錾���Ȃ��Ƃ����Ȃ�
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <cstdio>
#include <cmath>

void println(char alphabet) {
	//std::cout <<num<< "\n";
	printf("%c \n", alphabet);
}

void println(std::string sentence) {
	//std::cout << sentence << "\n";
	printf("%s \n", sentence.c_str());
}

void println(double num) {
	//std::cout <<num<< "\n";
	printf("%lf \n", num);
}

int main() {
	//"",''�̒��ӁFstd::string��""�łȂ��Ƃ����Ȃ�
	//�t��char��''�ň͂�Ȃ��Ƃ����Ȃ��Cfill(' ')�łȂ���΂����Ȃ������̂͂��̂���
	//char�ɓ���͈̂ꕶ������

	//switch: �f�[�^�i���������̏ꍇint,char�j�ŕ���
	//case �̌��̓R�����ł��邱�Ƃɒ���
	//break��Y���Ƃ���ȍ~�̏��������ׂĖ������ƔF������Ă��܂�
	//�ϐ��𕪂������Ƃ��͎����Ńu���b�N�𕪂���

	/*
	char size;
	println("Enter size : ");
	std::cin >> size;

	switch (size)
	{
	case 'S': case's':
	{
		println("size : S");
		break;
		int u = 5;
	}
	case 'M': case'm':
	{
		println("size : M");
		break;
		int u = 8;
	}
	case 'L': case 'l':
		println("size : L");
		break;
	default:
		println("Not available.");
	}*/

	println(std::cos(M_PI));
	println(std::log(M_E));
	println(std::sqrt(4));
	//pow:�����ׂ̂���̂��߂̂��̂Ȃ̂ŁC�������*�ŏ�������������
	println(std::pow(2,0.5));
	system("pause");
	return 0;
}