#include <iostream>
#include <array>
const int SIZE = 4;

void swap(int &i, int &j)
{
	int tmp = i;
	i = j;
	j = tmp;
	//std::cout << "&i:" << &i << ", &j:" << &j << "\n";
}
void bubbleSort(int *arr,int &step) {
	for (int i = 0; i < SIZE - 1; ++i) {
		for (int j=SIZE-1; j>i; --j) {
			step++;
			if (arr[j-1] > arr[j]) {
				swap(arr[j - 1], arr[j]);
			}
		}
	}
}
int main() {


	/*int x = 5;
	int y = 3;*/
	
	//"int x =5;"����茴���I�ɕ\�����Ă݂�i�I�u�W�F�N�g�̐����j
	//int *ptr = new int;
	//int�̃������̈���m��
	//*ptr = 5;
	//�m�ۂ����������ɒl����


	//std::cout << "*ptr=" << *ptr << "\n";
	//delete ptr;
	//�I�u�W�F�N�g�𐶐����C�g���I�������delete����i������������j


	int *array = new int[SIZE];
	int step = 0;
	for (int i = 0; i < SIZE; ++i) {
		std::cin >> array[i];

	}

	bubbleSort(array, step);

	for (int i = 0; i < SIZE; ++i) {
		std::cout << array[i] << "  ";

	}
	std::cout << "\n";
	std::cout << step << "\n";
	delete[] array;
	//delete[]: []�͔z��̗v�f���ׂẴ��������������

	system("pause");
	return 0;
}

//�h��1.�����ƍl�@
//�h��2.��r�̉񐔁C����ւ��񐔁C�̔�r�ɉ����萫�I�Ȑ����i���ꂼ��L���ȏ󋵁C���̂Ƃ��̌v�Z�I�[�_�[�j