#include "Dragon.h"
#include <iostream>
#include <string>


Dragon::Dragon(double x, double y) :
	m_x(x), m_y(y), m_hp(10)
	//const�ɂ��Ή��ł��鏉�������@
{

}


void Dragon::printHP() {
	std::cout << m_hp << "\n";
}
void Dragon::printPos() {
	std::cout << "(" << m_x << ", " << m_y << ")" << "\n";
}

int Dragon::getHP() {
	return m_hp;
}