#include <iostream>
#include <string>

int main()
{
	std::cout << "*practice1*" << "\n";
	/*
	
	double height,weight;
	std::cout << "身長(cm)を入力してください:" << "\n";
	std::cin >> height;
	std::cout << "体重(kg)を入力してください:" << "\n";
	std::cin >> weight;
	std::cout << "あなたの身長は" << height << "cmです" << "\n";
	std::cout << "あなたの体重は" << weight << "kgです" << "\n";
	int bmi = weight / ((height / 100.0)*(height / 100.0));
	std::cout<< "あなたのBMIは"<<bmi<<"です" << "\n";
	std::cout << "あなたは";
	if (bmi < 18.5)
	{
		std::cout << "やせすぎです\n";
	}
	else if (bmi < 25)
	//else if はif で漏れたもののみ対称にとる
	{
		if (bmi == 22)
		{
			std::cout << "The 普通体型です\n";
		}
		else
		{
			std::cout << "普通体型です\n";
		}
	}
	else
	{
		std::cout << "肥満体型です\n";
	}

	*/
	bool isinput = 10<9;
	// if の中身はbool　ただし0以外の数値を入れるとtrue, 0だとfalseとなる
	if (isinput)
	{
		std::cout << "isinput = true\n";

	}
	else
	{
		std::cout << "isinput = false\n";
	}

	system("pause");
	return 0;
}