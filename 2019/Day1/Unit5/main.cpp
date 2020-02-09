#include <iostream>
#include <string>

int main()
{
	int num;
	int i = 2;
	std::cout << "1‚©‚ç1000‚Ì®”‚ğ“ü‚ê‚Ä‚­‚¾‚³‚¢:\n";
	std::cin >> num;
	if (num < 1 || 1000 < num)
	{
		std::cout << "—LŒø”ÍˆÍŠO‚Å‚·\n";
	}
	else if (num == 1)
	{
		std::cout << "‚»‚ê‚Í‘f”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n";
	}
	else
	{
		for (; i < num; i++)
		{
			if (num%i == 0)
			{
				std::cout << "‚»‚ê‚Í‘f”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n";
				break;
			}
		}
		if (i == num)
		{
			std::cout << "‚»‚ê‚Í‘f”‚Å‚·\n";
		}
	}

	system("pause");
	return 0;
}