#include "Dragon.h"
#include <iostream>
#include <string>


Dragon::Dragon(double x, double y) :
	m_x(x), m_y(y), m_hp(10)
	//constにも対応できる初期化方法
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