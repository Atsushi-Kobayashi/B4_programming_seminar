#include <iostream>
#include <string>

int main()
{
	double m,F,t;
	std::cout << "物体の質量m(kg)を入力してください：" << "\n";
	std::cin >> m;
	std::cout << "推進力F(N)を入力してください：" << "\n";
	std::cin >> F;
	std::cout << "時間t(s)を入力してください：" << "\n";
	std::cin >> t;

	std::cout <<t<< "秒後の物体の速度は" << (F*t)/m << "(m/s)です" << "\n";
	system("pause");
	return 0;
}