#include <iostream>
#include <string>
#include <array>
#include <vector>

int main() {
	//�R���e�i
	//array�̏������̕��@�Ffor,�蓮
	//for: �������Ƃ���size��葽���ϐ������Ă��܂���*���s����*�G���[
	//�������킩��ɂ����C�悭����G���[�Ȃ̂ŗv����
	//�f�o�b�O�F�s���̍��ɂ���D�F�̃o�[���N���b�N����F5�Ńf�o�b�O���ł���
	//���₵���s�ɂ��Ă���āC���s���ăG���[�̏o�镔����T��
	//�z��̃T�C�Y�̓R���p�C�����Ɍ��肷��K�v������
	//�R���p�C�����Ɍ��܂��ĂȂ�[ex) "int size =5"�̂悤�ɐ錾]�ƃG���[
	//const, constexpr�Ȃ���v
	
	//vector:�T�C�Y�Œ�łȂ��C���Ƃ���v�f��}���\
	int size;
	std::cin >> size;
	//std::array<int, size>results;

	std::vector<int> results;

	for (int i = 0; i < size;++i) {
		results.insert(results.begin(),i * i);
		/*for (int j = 0; j < results.size();++j ) {
			std::cout <<i<<"���"<<j<<"�Ԗ�:"<< results[j] << "\n";
		}*/
	}
	for (int i = 0; i < size; ++i) {
		std::cout << results[i] << "\n";
	}
	
	//�蓮�ŏ������Fsize��葽���ϐ�������ƃR���p�C���G���[�C
	//���������Ȃ������Ǝc���0�ŏ����������

	//std::array<int, size>results2 = {1,2,3,4};

	system("pause");
	return 0;
}
