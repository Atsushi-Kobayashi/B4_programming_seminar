#include <iostream>
#include <string>
#include <array>
#include <vector>

int main() {
	//コンテナ
	//arrayの初期化の方法：for,手動
	//for: 代入するときにsizeより多く変数を入れてしまうと*実行時に*エラー
	//原因がわかりにくく，よくあるエラーなので要注意
	//デバッグ：行数の左にある灰色のバーをクリックしてF5でデバッグができる
	//あやしい行についてやって，続行してエラーの出る部分を探す
	//配列のサイズはコンパイル時に決定する必要がある
	//コンパイル時に決まってない[ex) "int size =5"のように宣言]とエラー
	//const, constexprなら大丈夫
	
	//vector:サイズ固定でない，あとから要素を挿入可能
	int size;
	std::cin >> size;
	//std::array<int, size>results;

	std::vector<int> results;

	for (int i = 0; i < size;++i) {
		results.insert(results.begin(),i * i);
		/*for (int j = 0; j < results.size();++j ) {
			std::cout <<i<<"回目"<<j<<"番目:"<< results[j] << "\n";
		}*/
	}
	for (int i = 0; i < size; ++i) {
		std::cout << results[i] << "\n";
	}
	
	//手動で初期化：sizeより多く変数を入れるとコンパイルエラー，
	//しかし少なく入れると残りは0で初期化される

	//std::array<int, size>results2 = {1,2,3,4};

	system("pause");
	return 0;
}
