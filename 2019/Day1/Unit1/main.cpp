#include <iostream>
#include <string>

int main()
{
	// �R�����g�A�E�g ���s�ŏI���
	// int�͐����̂� double�͏�������
	// float �͐��x���ǂ��Ȃ�,CPU�ł̎��s���x��(double�ɒu�������Ă��爵���Ă�)����{��double��
	// float��exp �ŏ�����Ă�炵��(�傫�����ɂ͋����H)

	//float number = 0.5f;
	//std::cout << 256*256*256*128 << "\n";

	// Over Flow...int �̗e�ʂ�4bite �� -((2^8)^4)/2 ~ +((2^8)^4)/2 (+-21�����炢)�͈̔�
	// double��8bite,float

	//std::cout << number << "\n";
	//std::cout << sizeof(float) << "\n";
	

	//std::string words;
	//words = "Hello World";
	//std::cout << words << "\n";

	//int num;
	//std::cout << "input number" << "\n";
	//std::cin >> num;
	//std::cout << "num:"<<num << "\n";

	int height;
	int weight;
	std::cout << "�g��(cm)����͂��Ă�������:" << "\n";
	std::cin >> height;
	std::cout << "�̏d(kg)����͂��Ă�������:" << "\n";
	std::cin >> weight;
	std::cout << "���Ȃ��̐g����" << height << "cm�ł�" << "\n";
	std::cout << "���Ȃ��̑̏d��" << weight << "kg�ł�" << "\n";


	system("pause");
	return 0;
}