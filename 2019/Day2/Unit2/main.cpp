#include <iostream>
#include <string>

int main()
{
	//10(x+6)-(7-8y)=699 (x,y)
	//10x+8y=632


	int x, y;
	/*
	mx = (632 - 8) / 10;
	std::cout << "方程式 10(x+6)-(7-8y)=699 を満たす整数(x,y)の組は以下の通り" << "\n";
	for (x = 1; x <= 100; x++)
	{
		my = (632 - 10 * x) / 8;
		for (y = 1; y <= 100; y++)
		{
			if (10 * (x + 6) - (7 - 8 * y) == 699)
			{
				std::cout << "(" << x << "," << y << ")" << "\n";
			}
		}
	}
	*/
	//未完成
	for (x = 1; x <= 100; x++)
	{
		if ((632 - 10 * x) % 8 == 0&& 632 - 10 * x>0);
		{
			y = (632 - 10 * x) / 8;
			std::cout << "(" << x << "," << y << ")" << "\n";
		}

	}
	
	system("pause");
	return 0;
}
