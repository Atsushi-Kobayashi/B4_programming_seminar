#pragma once
#include <string>

class Dragon
{
public:
	Dragon(double x, double y);
	virtual ~Dragon() {};
	//�f�X�g���N�^�F�C���X�^���X�����������ɌĂ΂�����
	//virtual...�h���N���X�ɂ͔h���N���X�̃f�B�X�g���N�^���Ă΂���
	void printHP();
	void printPos();
	int getHP();
protected:
	//�h���N���X�Ɉڂ��ƃv���C�x�[�g�ɂȂ�ϐ�
	int m_hp;
	double const m_x, m_y;
};
