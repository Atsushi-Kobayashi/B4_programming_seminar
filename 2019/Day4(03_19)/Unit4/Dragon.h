#pragma once
#include <string>

class Dragon
{
public:
	Dragon(double x, double y);
	virtual ~Dragon() {};
	//デストラクタ：インスタンスが消えた時に呼ばれるもの
	//virtual...派生クラスには派生クラスのディストラクタを呼ばせる
	void printHP();
	void printPos();
	int getHP();
protected:
	//派生クラスに移すとプライベートになる変数
	int m_hp;
	double const m_x, m_y;
};
