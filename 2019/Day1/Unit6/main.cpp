#include <iostream>
#include <string>

int main()
{
	for (int i = 0; i < 10; i++)
	{
		if (i%2==0&&i<7||i ==9)
		{
			continue;
		}
		std::cout << i << "‰ñ–Ú\n";
	}

	
	system("pause");
	return 0;
}