#include <iostream>
#include <string>

int main()
{
	int year=0;
	double interest, principal=1;
	std::cout << "�N��(%)����͂��Ă��������F" << "\n";
	std::cin >> interest;
	while (principal<2)
	{
		principal = principal * (1 + interest/100);
		//std::cout << principal << "\n";
		++year;
	}
	std::cout << "���{��2�{�ȏ�ɂȂ�̂�" << year<<"�N��ł�"<<"\n";
	system("pause");
	return 0;
}