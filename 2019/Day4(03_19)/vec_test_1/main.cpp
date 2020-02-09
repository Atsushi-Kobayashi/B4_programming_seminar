#include <iostream>
#include "Vec2.hpp"

int main()
{
	// �g����
	Vec2 a, b, c;

	std::cin >> a;  // �x�N�g��a��x����, y������C�ɓ��͂��邱�Ƃ��ł���
	std::cout << a; // �x�N�g��a��x����, y������C�ɏo�͂��邱�Ƃ��ł���

	a = Vec2(7, 1);
	b = Vec2(2, 3);

	// �x�N�g���̎l�����Z�͑㐔�ň����̂Ɠ����悤�ɂł��܂�
	c = a + b;               // c = Vec2(9, 4)
	c = 4 * a;               // c = Vec2(28, 4)
	bool isEqual = (a == b); // a �� b �̐������S�ē�������true

	// �������m�̊|���Z
	c = prod(a, b); // c = Vec2(7 * 2, 1 * 3) = Vec2(14, 3)

	// ���ςƊO�ρ@���ꂼ��Q�ʂ菑����������܂��@�g���̂͂ǂ����ł��\���܂���
	// ����
	double s = dot(a, b);
	double t = a.dot(b);

	// �O��
	double u = cross(a, b); // Vec2�͖߂�l��double, Vec3�̏ꍇ��Vec3
	double v = a.cross(b);

	// �x�N�g���̑傫��
	double length = a.length();
	double length2 = a.lengthSquare(); // �傫���̓��

	// �x�N�g���̋K�i��  a����x�N�g���ł���Ƃ��͗�x�N�g���ƂȂ�
	a.normalize();           // a���K�i��
	Vec2 n = a.normalized(); // a�̒P�ʕ����x�N�g�����擾�@a�͕ω����Ȃ�

	// ��_�Ԃ̋���  2�ʂ�̏�����
	double d = a.distanceFrom(b);
	double l = distance(a, b);
	system("pause");
	return 0;
}
