#include "Dragon.h"
#include <iostream>
#include <string>

int Dragon::s_count = 0;

Dragon::Dragon(double x,double y):
	m_x(x),m_y(y),m_hp(10)
//const�ɂ��Ή��ł��鏉�������@
{
	++s_count;//����܂�悭�Ȃ����Aint��++������0�ŏ���������C1�ɂȂ�
	//m_hp = 10;
	//m_x = x;
	//m_y = y;
}

//void Dragon::printName() {
//	std::cout << m_name << "\n";
//}

void Dragon::printHP() {
	std::cout << m_hp<< "\n";
}
void Dragon::printPos() {
	std::cout << "("<<m_x <<", "<<m_y<<")"<< "\n";
}

int Dragon::getHP() {
	return m_hp;
}