#include <iostream>
#include <string>

int main()
{
	double m,F,t;
	std::cout << "���̂̎���m(kg)����͂��Ă��������F" << "\n";
	std::cin >> m;
	std::cout << "���i��F(N)����͂��Ă��������F" << "\n";
	std::cin >> F;
	std::cout << "����t(s)����͂��Ă��������F" << "\n";
	std::cin >> t;

	std::cout <<t<< "�b��̕��̂̑��x��" << (F*t)/m << "(m/s)�ł�" << "\n";
	system("pause");
	return 0;
}