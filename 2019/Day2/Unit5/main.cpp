#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <cstdio>
//iostream ��cstdio�̋����͂��܂�悭�Ȃ��炵��
//function�̏�����
//output_type function_name(input_type ����){
// ... 
//     return �߂�l; }
//
int abs(int num) {
	if (num < 0) {
		num *=-1;
	}
	return num;
}
int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}
double max(double x, double y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

//�I�[�o�[���[�h�F�����̊֐��ł��C�����̌^���Ⴄ�C�܂��͈����̌����Ⴆ�΁c
//�c������邱�Ƃ��ł��遨���������C�ӂ̌^�C���̈����ɑΉ�����悤�ɂł���
//��j�x�N�g���ɂ���"/"�Ƃ������Z�������Œ�`���Ă��΁C�X�J���[�ɗp����Ε��ʂ̊���Z�C
//�@�@�x�N�g���Ȃ炻�̉��Z�C�Ƃ����悤�Ɏ����Ōv�Z���Ă����

int max_3(int x, int y ,int z) {
	if (x > y) {
		if (x > z) {
			return x;
		}
		else {
			return z;
		}
	}
	else if (y > z) {
		return y;
	}
	else {
		return z;
	}
}
//void:�߂�l�̂Ȃ��֐�
void println(std::string sentence){
	//std::cout << sentence << "\n";
	printf("%s \n", sentence.c_str());
}

void println(int num) {
	//std::cout <<num<< "\n";
	printf("%d \n", num);
}
void println(double num) {
	//std::cout <<num<< "\n";
	printf("%lf \n", num);
}
//���Fstd::cout�͌^�����̕K�v�����邽��printf()�̕�������

int main() {
	//double x, y,z;
	//int a, b, c;
	//std::cout << "Input number x: ";
	//std::cin >> x;
	//std::cout << "Input number y: ";
	//std::cin >> y;
	//std::cout << "Input number z: ";
	//std::cin >> z;
	//std::cout << "Input number a: ";
	//std::cin >> a;
	//std::cout << "Input number b: ";
	//std::cin >> b;
	//std::cout << "Input number c: ";
	//std::cin >> c;
	////std::cout <<"abs(x) : "<< abs(x) << "\n";
	//std::cout << "max(x,y): " << max(x,y) << "\n";
	//std::cout << "max(a,b): " << max(a,b) << "\n";
	////std::cout << "max(x,y,z): " << max_3(x, y,z) << "\n";
	////std::cout << "max(x,y,z): " << max(max(x,y),z) << "\n";

	/*std::string words = "function for print";
	int num = 5;
	println(words);
	println(num);*/
	for (int i = 0; i < 10000; ++i) {
		//std::cout <<i<< "\n";
		printf("%d \n", i);
	}
	system("pause");
	return 0;
}
