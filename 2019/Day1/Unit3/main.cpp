#include <iostream>
#include <string>

int main()
{
	int num;
	std::cout << "Input number:" << "\n";
	std::cin >> num;
	std::cout << "It is ";
	if (num % 2 == 0)
	{
		std::cout << "even." << "\n";
	}
	else
	{
		std::cout << "odd." << "\n";
	}
	system("pause");
	return 0;
}