#include <iostream>
#include <string>

int main()
{
	int num;
	int i = 2;
	std::cout << "1����1000�̐��������Ă�������:\n";
	std::cin >> num;
	if (num < 1 || 1000 < num)
	{
		std::cout << "�L���͈͊O�ł�\n";
	}
	else if (num == 1)
	{
		std::cout << "����͑f���ł͂���܂���\n";
	}
	else
	{
		for (; i < num; i++)
		{
			if (num%i == 0)
			{
				std::cout << "����͑f���ł͂���܂���\n";
				break;
			}
		}
		if (i == num)
		{
			std::cout << "����͑f���ł�\n";
		}
	}

	system("pause");
	return 0;
}