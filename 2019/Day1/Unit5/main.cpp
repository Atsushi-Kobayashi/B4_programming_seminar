#include <iostream>
#include <string>

int main()
{
	int num;
	int i = 2;
	std::cout << "1から1000の整数を入れてください:\n";
	std::cin >> num;
	if (num < 1 || 1000 < num)
	{
		std::cout << "有効範囲外です\n";
	}
	else if (num == 1)
	{
		std::cout << "それは素数ではありません\n";
	}
	else
	{
		for (; i < num; i++)
		{
			if (num%i == 0)
			{
				std::cout << "それは素数ではありません\n";
				break;
			}
		}
		if (i == num)
		{
			std::cout << "それは素数です\n";
		}
	}

	system("pause");
	return 0;
}