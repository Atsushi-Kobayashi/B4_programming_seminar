#pragma once
#include <string>

class Dragon
{
public:
	static int s_count;
	//static...�C���X�^���X�ŗL�ł͂Ȃ��C�����N���X�ŋ��ʂ̕ϐ�
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
