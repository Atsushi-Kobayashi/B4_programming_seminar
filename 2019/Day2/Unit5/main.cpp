#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <cstdio>
//iostream とcstdioの共存はあまりよくないらしい
//functionの書き方
//output_type function_name(input_type 引数){
// ... 
//     return 戻り値; }
//
int abs(int num) {
	if (num < 0) {
		num *=-1;
	}
	return num;
}
int max(int x, int y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}
double max(double x, double y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

//オーバーロード：同名の関数でも，引数の型が違う，または引数の個数が違えば…
//…複数作ることができる→同じ操作を任意の型，個数の引数に対応するようにできる
//例）ベクトルについて"/"という演算を自分で定義してやれば，スカラーに用いれば普通の割り算，
//　　ベクトルならその演算，というように自動で計算してくれる

int max_3(int x, int y ,int z) {
	if (x > y) {
		if (x > z) {
			return x;
		}
		else {
			return z;
		}
	}
	else if (y > z) {
		return y;
	}
	else {
		return z;
	}
}
//void:戻り値のない関数
void println(std::string sentence){
	//std::cout << sentence << "\n";
	printf("%s \n", sentence.c_str());
}

void println(int num) {
	//std::cout <<num<< "\n";
	printf("%d \n", num);
}
void println(double num) {
	//std::cout <<num<< "\n";
	printf("%lf \n", num);
}
//注：std::coutは型検査の必要があるためprintf()の方が速い

int main() {
	//double x, y,z;
	//int a, b, c;
	//std::cout << "Input number x: ";
	//std::cin >> x;
	//std::cout << "Input number y: ";
	//std::cin >> y;
	//std::cout << "Input number z: ";
	//std::cin >> z;
	//std::cout << "Input number a: ";
	//std::cin >> a;
	//std::cout << "Input number b: ";
	//std::cin >> b;
	//std::cout << "Input number c: ";
	//std::cin >> c;
	////std::cout <<"abs(x) : "<< abs(x) << "\n";
	//std::cout << "max(x,y): " << max(x,y) << "\n";
	//std::cout << "max(a,b): " << max(a,b) << "\n";
	////std::cout << "max(x,y,z): " << max_3(x, y,z) << "\n";
	////std::cout << "max(x,y,z): " << max(max(x,y),z) << "\n";

	/*std::string words = "function for print";
	int num = 5;
	println(words);
	println(num);*/
	for (int i = 0; i < 10000; ++i) {
		//std::cout <<i<< "\n";
		printf("%d \n", i);
	}
	system("pause");
	return 0;
}
