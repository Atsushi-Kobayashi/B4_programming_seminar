#include <iostream>
#include <string>

int main()
{
	// コメントアウト 改行で終わる
	// intは整数のみ doubleは少数も可
	// float は精度が良くない,CPUでの実行が遅い(doubleに置き換えてから扱ってる)→基本はdoubleで
	// floatはexp で書かれてるらしい(大きい桁には強い？)

	//float number = 0.5f;
	//std::cout << 256*256*256*128 << "\n";

	// Over Flow...int の容量は4bite → -((2^8)^4)/2 ~ +((2^8)^4)/2 (+-21億くらい)の範囲
	// doubleは8bite,float

	//std::cout << number << "\n";
	//std::cout << sizeof(float) << "\n";
	

	//std::string words;
	//words = "Hello World";
	//std::cout << words << "\n";

	//int num;
	//std::cout << "input number" << "\n";
	//std::cin >> num;
	//std::cout << "num:"<<num << "\n";

	int height;
	int weight;
	std::cout << "身長(cm)を入力してください:" << "\n";
	std::cin >> height;
	std::cout << "体重(kg)を入力してください:" << "\n";
	std::cin >> weight;
	std::cout << "あなたの身長は" << height << "cmです" << "\n";
	std::cout << "あなたの体重は" << weight << "kgです" << "\n";


	system("pause");
	return 0;
}