#include <iostream>
#include <string>

int main() {
	//�ϐ��̃X�R�[�v�F�u���b�N�Ƃ����P��
	//if,for�ȂǂŎg���ϐ��͂��̕��̓����Œ�`����ƁC�O�ł͎g���Ȃ��̂Œ���
	//�t�ɁC����������邽�߂ɕ����݂̂Ŏg�����̂͂����Œ�`���ׂ��ł���
	/*
	for (int i = 0; i < 5; ++i) {
		int b = 5;
		std::cout << b << "\n";

	}
	*/

	//const:�ύX�s�C�R�[�h���ŕύX�����݂��Ă���ƃG���[���o���Ă����
	//����Ɍ��炸�A�Ӑ}���ʓ����h���@�\�͏d�v
	//constexper: �R���p�C�����ɒ萔�ƕ]�������Bconst�͎��s���̕]��
	//X =10/5�݂����ɐ�ɂ킩���Ă���̂�萔�ɂ������Ȃ�C���炩���߃R���p�C���Ōv�Z�ł���constexpr���悢
	//�t�ɁC���͂���萔���߂����Ƃ��Ȃǂ�const���g��

	const double mass = 5;
	double velocity = 0.0;
	for (int i = 0; i < 5; ++i) {
		velocity += 2.0 / mass;
	}
	std::cout << velocity << "\n";
	system("pause");
	return 0;

}