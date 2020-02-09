#include <iostream>
#include <string>

int main()
{
	int year=0;
	double interest, principal=1;
	std::cout << "年利(%)を入力してください：" << "\n";
	std::cin >> interest;
	while (principal<2)
	{
		principal = principal * (1 + interest/100);
		//std::cout << principal << "\n";
		++year;
	}
	std::cout << "元本が2倍以上になるのは" << year<<"年後です"<<"\n";
	system("pause");
	return 0;
}