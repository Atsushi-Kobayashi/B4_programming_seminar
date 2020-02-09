#include <iostream>
#include "Vec2.hpp"

int main()
{
	// 使い方
	Vec2 a, b, c;

	std::cin >> a;  // ベクトルaのx成分, y成分一気に入力することができる
	std::cout << a; // ベクトルaのx成分, y成分一気に出力することができる

	a = Vec2(7, 1);
	b = Vec2(2, 3);

	// ベクトルの四則演算は代数で扱うのと同じようにできます
	c = a + b;               // c = Vec2(9, 4)
	c = 4 * a;               // c = Vec2(28, 4)
	bool isEqual = (a == b); // a と b の成分が全て等しい時true

	// 成分同士の掛け算
	c = prod(a, b); // c = Vec2(7 * 2, 1 * 3) = Vec2(14, 3)

	// 内積と外積　それぞれ２通り書き方があります　使うのはどっちでも構いません
	// 内積
	double s = dot(a, b);
	double t = a.dot(b);

	// 外積
	double u = cross(a, b); // Vec2は戻り値がdouble, Vec3の場合はVec3
	double v = a.cross(b);

	// ベクトルの大きさ
	double length = a.length();
	double length2 = a.lengthSquare(); // 大きさの二乗

	// ベクトルの規格化  aが零ベクトルであるときは零ベクトルとなる
	a.normalize();           // aを規格化
	Vec2 n = a.normalized(); // aの単位方向ベクトルを取得　aは変化しない

	// 二点間の距離  2通りの書き方
	double d = a.distanceFrom(b);
	double l = distance(a, b);
	system("pause");
	return 0;
}
