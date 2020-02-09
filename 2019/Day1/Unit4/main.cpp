#include <iostream>
#include <string>

int main()
{
	std::cout << "*Unit4*\n";
	int i = 0;
	/*for (; i < 10 ; ++i)
	{
		std::cout << i << "回目\n";
	}*/
	while (i<10)
	{
		std::cout <<"i++:"<< i++ << "回目\n";
	}
	//i++と++i：実行してから足すか，足してから実行するか
	//文中でやるのは混乱を生むのでやめたほうが良い？

	system("pause");
	return 0;
}