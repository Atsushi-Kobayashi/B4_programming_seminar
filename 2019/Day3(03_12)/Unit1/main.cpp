#include <iostream>
#include <array>

void swapValue(int i, int j)
{
	int tmp = i;
	i = j;
	j = tmp;
	//i,j �͕ύX���ꂽ��x,y�͕ς��Ȃ����������̕ۑ��ꏊ���Ⴄ
	//�l�n���c�����ɓ��ꂽ�l���R�s�[���C�ʂ̏ꏊ�ɕۑ�
	std::cout << "&i:" << &i << ", &j:" << &j << "\n";
}

void swapAddress(int &i, int &j)
{
	//�Q�Ɠn���c�֐����̕ϐ��̃A�h���X�������ƌ��ѕt��
	//���_�F�������l�Ȃ̂ŁC������ύX����֐��Ȃ̂���ڂł͂킩��Ȃ�
	int tmp = i;
	i = j;
	j = tmp;
	std::cout << "&i:" << &i << ", &j:" << &j << "\n";
}

void swapPtr(int *i_ptr, int *j_ptr)
{
	//�|�C���^�n���c�����̓A�h���X�C�֐����ϐ��͂��̃A�h���X��l�Ɏ���
	if (!i_ptr || !j_ptr) {
		return;
	}
	//�����lcheck

	int tmp = *i_ptr;
	*i_ptr=*j_ptr;
	*j_ptr = tmp;
}


int main() {


	int x = 5;
	int y = 3;
	int *x_ptr = nullptr;
	int *y_ptr = nullptr;
	//nullptr...�����w���ĂȂ��C�����l

	//std::cout << "&x:" << &x << ", &y:" << &y << "\n";
	//&x...x�̃������̕ۑ��ʒu

	/*int tmp = x;
	x = y;
	y = tmp;*/
	//swapAddress(x, y);

	//std::cout << "x=" << x << ", y=" << y << "\n";


	//�z��̃A�h���X
	//std::array<double, 3> arr = { 2,6,8 };
	//std::cout << "arr:" << &arr << ", arr[0]:" << &arr[0] << ", arr[1]:" << &arr[1] << "\n";
	//&arr =&arr[0], arr[1]��arr[0]�͕ϐ���̊i�[�ɕK�v��bite���������
	//int �Ȃ�4,double�Ȃ�8�����

	//int *ptr = &x;
	//�|�C���^�c�ϐ��̃A�h���X��l�Ƃ��Ċi�[�C*ptr�݂����ɏ���
	//�錾����*ptr�Ə����C����ɃA�h���X�������邪�C
	//����ȍ~��*prt�Ə����Ƃ��̃A�h���X�̒l���Cptr�Ə����ƃA�h���X���������ƂɂȂ�
	//int* ptr = &x�Ə����Ă��悢

	/*std::cout << "&x:" << &x << ", ptr:" << ptr << "\n";
	std::cout << "x:" << x << ", *ptr:" << *ptr << "\n";
	*ptr = 8;
	std::cout << "x:" << x << ", *ptr:" << *ptr << "\n";
	ptr = &y;
	std::cout << "y:" << y << ", *ptr:" << *ptr << "\n";*/

	swapPtr(x_ptr, y_ptr);
	std::cout << "x=" << x << ", y=" << y << "\n";
	system("pause");
	return 0;
}