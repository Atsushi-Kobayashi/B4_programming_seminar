#include <iostream>
#include <string>

int main() {
	//変数のスコープ：ブロックという単位
	//if,forなどで使う変数はその文の内部で定義すると，外では使えないので注意
	//逆に，混同を避けるために文内のみで使うものはそこで定義すべきである
	/*
	for (int i = 0; i < 5; ++i) {
		int b = 5;
		std::cout << b << "\n";

	}
	*/

	//const:変更不可，コード内で変更が試みられているとエラーを出してくれる
	//これに限らず、意図せぬ動作を防ぐ機能は重要
	//constexper: コンパイル時に定数と評価される。constは実行時の評価
	//X =10/5みたいに先にわかってるものを定数にしたいなら，あらかじめコンパイルで計算できるconstexprがよい
	//逆に，入力から定数を定めたいときなどはconstを使う

	const double mass = 5;
	double velocity = 0.0;
	for (int i = 0; i < 5; ++i) {
		velocity += 2.0 / mass;
	}
	std::cout << velocity << "\n";
	system("pause");
	return 0;

}