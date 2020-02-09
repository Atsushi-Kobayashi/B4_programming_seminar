#include <iostream>
#include <array>

void swapValue(int i, int j)
{
	int tmp = i;
	i = j;
	j = tmp;
	//i,j は変更されたがx,yは変わらない→メモリの保存場所が違う
	//値渡し…引数に入れた値をコピーし，別の場所に保存
	std::cout << "&i:" << &i << ", &j:" << &j << "\n";
}

void swapAddress(int &i, int &j)
{
	//参照渡し…関数内の変数のアドレスを引数と結び付け
	//問題点：引数が値なので，引数を変更する関数なのか一目ではわからない
	int tmp = i;
	i = j;
	j = tmp;
	std::cout << "&i:" << &i << ", &j:" << &j << "\n";
}

void swapPtr(int *i_ptr, int *j_ptr)
{
	//ポインタ渡し…引数はアドレス，関数内変数はそのアドレスを値に持つ
	if (!i_ptr || !j_ptr) {
		return;
	}
	//無効値check

	int tmp = *i_ptr;
	*i_ptr=*j_ptr;
	*j_ptr = tmp;
}


int main() {


	int x = 5;
	int y = 3;
	int *x_ptr = nullptr;
	int *y_ptr = nullptr;
	//nullptr...何も指してない，無効値

	//std::cout << "&x:" << &x << ", &y:" << &y << "\n";
	//&x...xのメモリの保存位置

	/*int tmp = x;
	x = y;
	y = tmp;*/
	//swapAddress(x, y);

	//std::cout << "x=" << x << ", y=" << y << "\n";


	//配列のアドレス
	//std::array<double, 3> arr = { 2,6,8 };
	//std::cout << "arr:" << &arr << ", arr[0]:" << &arr[0] << ", arr[1]:" << &arr[1] << "\n";
	//&arr =&arr[0], arr[1]とarr[0]は変数一つの格納に必要なbiteだけずれる
	//int なら4,doubleなら8ずれる

	//int *ptr = &x;
	//ポインタ…変数のアドレスを値として格納，*ptrみたいに書く
	//宣言時は*ptrと書き，これにアドレスを代入するが，
	//それ以降は*prtと書くとそのアドレスの値を，ptrと書くとアドレスを示すことになる
	//int* ptr = &xと書いてもよい

	/*std::cout << "&x:" << &x << ", ptr:" << ptr << "\n";
	std::cout << "x:" << x << ", *ptr:" << *ptr << "\n";
	*ptr = 8;
	std::cout << "x:" << x << ", *ptr:" << *ptr << "\n";
	ptr = &y;
	std::cout << "y:" << y << ", *ptr:" << *ptr << "\n";*/

	swapPtr(x_ptr, y_ptr);
	std::cout << "x=" << x << ", y=" << y << "\n";
	system("pause");
	return 0;
}