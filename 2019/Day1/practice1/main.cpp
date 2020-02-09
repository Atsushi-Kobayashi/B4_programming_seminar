#include <iostream>
#include <string>

int main()
{
	std::cout << "*practice1*" << "\n";
	/*
	
	double height,weight;
	std::cout << "g’·(cm)‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:" << "\n";
	std::cin >> height;
	std::cout << "‘Ìd(kg)‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:" << "\n";
	std::cin >> weight;
	std::cout << "‚ ‚È‚½‚Ìg’·‚Í" << height << "cm‚Å‚·" << "\n";
	std::cout << "‚ ‚È‚½‚Ì‘Ìd‚Í" << weight << "kg‚Å‚·" << "\n";
	int bmi = weight / ((height / 100.0)*(height / 100.0));
	std::cout<< "‚ ‚È‚½‚ÌBMI‚Í"<<bmi<<"‚Å‚·" << "\n";
	std::cout << "‚ ‚È‚½‚Í";
	if (bmi < 18.5)
	{
		std::cout << "‚â‚¹‚·‚¬‚Å‚·\n";
	}
	else if (bmi < 25)
	//else if ‚Íif ‚Å˜R‚ê‚½‚à‚Ì‚Ì‚Ý‘ÎÌ‚É‚Æ‚é
	{
		if (bmi == 22)
		{
			std::cout << "The •’Ê‘ÌŒ^‚Å‚·\n";
		}
		else
		{
			std::cout << "•’Ê‘ÌŒ^‚Å‚·\n";
		}
	}
	else
	{
		std::cout << "”ì–ž‘ÌŒ^‚Å‚·\n";
	}

	*/
	bool isinput = 10<9;
	// if ‚Ì’†g‚Íbool@‚½‚¾‚µ0ˆÈŠO‚Ì”’l‚ð“ü‚ê‚é‚Ætrue, 0‚¾‚Æfalse‚Æ‚È‚é
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