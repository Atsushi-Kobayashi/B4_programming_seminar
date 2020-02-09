#pragma once
#include <string>

class Dragon
{
public:
	static int s_count;
	//static...インスタンス固有ではなく，同じクラスで共通の変数
	Dragon(double x,double y);
	//void printName();
	void printHP();
	void printPos();
	int getHP();
private:
	//std::string m_name;
	int m_hp;
	double const m_x, m_y;

	//
};
