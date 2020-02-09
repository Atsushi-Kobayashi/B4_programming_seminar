#define _USE_MATH_DEFINES
//上はcmath(,iostream)より先に宣言しないといけない
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <cstdio>
#include <cmath>

void println(char alphabet) {
	//std::cout <<num<< "\n";
	printf("%c \n", alphabet);
}

void println(std::string sentence) {
	//std::cout << sentence << "\n";
	printf("%s \n", sentence.c_str());
}

void println(double num) {
	//std::cout <<num<< "\n";
	printf("%lf \n", num);
}

int main() {
	//"",''の注意：std::stringは""でないといけない
	//逆にcharは''で囲わないといけない，fill(' ')でなければいけなかったのはこのため
	//charに入るのは一文字だけ

	//switch: データ（だいたいの場合int,char）で分岐
	//case の後ろはコロンであることに注意
	//breakを忘れるとそれ以降の条件をすべて満たすと認識されてしまう
	//変数を分けたいときは自分でブロックを分ける

	/*
	char size;
	println("Enter size : ");
	std::cin >> size;

	switch (size)
	{
	case 'S': case's':
	{
		println("size : S");
		break;
		int u = 5;
	}
	case 'M': case'm':
	{
		println("size : M");
		break;
		int u = 8;
	}
	case 'L': case 'l':
		println("size : L");
		break;
	default:
		println("Not available.");
	}*/

	println(std::cos(M_PI));
	println(std::log(M_E));
	println(std::sqrt(4));
	//pow:少数のべき乗のためのものなので，整数乗は*で書いた方が速い
	println(std::pow(2,0.5));
	system("pause");
	return 0;
}