#include <iostream>
#include <string>

int main()
{
	std::cout << "*practice1*" << "\n";
	/*
	
	double height,weight;
	std::cout << "�g��(cm)����͂��Ă�������:" << "\n";
	std::cin >> height;
	std::cout << "�̏d(kg)����͂��Ă�������:" << "\n";
	std::cin >> weight;
	std::cout << "���Ȃ��̐g����" << height << "cm�ł�" << "\n";
	std::cout << "���Ȃ��̑̏d��" << weight << "kg�ł�" << "\n";
	int bmi = weight / ((height / 100.0)*(height / 100.0));
	std::cout<< "���Ȃ���BMI��"<<bmi<<"�ł�" << "\n";
	std::cout << "���Ȃ���";
	if (bmi < 18.5)
	{
		std::cout << "�₹�����ł�\n";
	}
	else if (bmi < 25)
	//else if ��if �ŘR�ꂽ���̂̂ݑΏ̂ɂƂ�
	{
		if (bmi == 22)
		{
			std::cout << "The ���ʑ̌^�ł�\n";
		}
		else
		{
			std::cout << "���ʑ̌^�ł�\n";
		}
	}
	else
	{
		std::cout << "�얞�̌^�ł�\n";
	}

	*/
	bool isinput = 10<9;
	// if �̒��g��bool�@������0�ȊO�̐��l�������true, 0����false�ƂȂ�
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