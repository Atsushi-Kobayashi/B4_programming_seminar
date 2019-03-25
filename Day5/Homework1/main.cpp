#include <iostream>
#include "Vec2.hpp"

//三角形と直線の交差判定のための関数，交差するとき1, しないとき0, エラーのとき-1を返す
int isIntersect(Vec2 point_on_the_line_u, Vec2 point_on_the_line_v,
	Vec2 vertex_of_triangle_a, Vec2 vertex_of_triangle_b, Vec2 vertex_of_triangle_c) {
	Vec2 vec_u_to_v, vec_u_to_a, vec_u_to_b, vec_u_to_c;
	double uv_cross_ua, uv_cross_ub, uv_cross_uc;
	int count_positive_value = 0;

	//定義域を超える入力に対する処理，エラーとして-1を返す
	if (point_on_the_line_u.x < -10 || point_on_the_line_u.x>10 || point_on_the_line_u.y < -10 || point_on_the_line_u.y>10) {
		std::cout << "Error:out of domain.\n";
		return -1;
	}
	else if (point_on_the_line_v.x < -10 || point_on_the_line_v.x>10 || point_on_the_line_v.y < -10 || point_on_the_line_v.y>10) {
		std::cout << "Error:out of domain.\n";
		return -1;
	}
	else if (vertex_of_triangle_a.x < -10 || vertex_of_triangle_a.x>10 || vertex_of_triangle_a.y < -10 || vertex_of_triangle_a.y>10) {
		std::cout << "Error:out of domain.\n";
		return -1;
	}
	else if (vertex_of_triangle_b.x < -10 || vertex_of_triangle_b.x>10 || vertex_of_triangle_b.y < -10 || vertex_of_triangle_b.y>10) {
		std::cout << "Error:out of domain.\n";
		return -1;
	}
	else if (vertex_of_triangle_c.x < -10 || vertex_of_triangle_c.x>10 || vertex_of_triangle_c.y < -10 || vertex_of_triangle_c.y>10) {
		std::cout << "Error:out of domain.\n";
		return -1;
	}

	//u,vもしくはa,b,cに一致するものがある場合の処理，エラーとして-1を返す
	if (point_on_the_line_u == point_on_the_line_v) {
		std::cout << "Error:the points on the line must be different each other.\n";
		return -1;
	}
	else if (vertex_of_triangle_a == vertex_of_triangle_b || vertex_of_triangle_b == vertex_of_triangle_c, vertex_of_triangle_c == vertex_of_triangle_a) {
		std::cout << "Error:the triangle vertices must be different from each other.\n";
		return -1;
	}

	vec_u_to_v = point_on_the_line_v - point_on_the_line_u;
	vec_u_to_a = vertex_of_triangle_a - point_on_the_line_u;
	vec_u_to_b = vertex_of_triangle_b - point_on_the_line_u;
	vec_u_to_c = vertex_of_triangle_c - point_on_the_line_u;

	uv_cross_ua = cross(vec_u_to_v, vec_u_to_a);
	uv_cross_ub = cross(vec_u_to_v, vec_u_to_b);
	uv_cross_uc = cross(vec_u_to_v, vec_u_to_c);

	//直線が頂点を通る場合（uvがua,ub,ucのどれかと平行）の処理，1(交差する)を返す
	if (uv_cross_ua == 0 || uv_cross_ub == 0 || uv_cross_uc == 0) {
		return 1;
	}

	count_positive_value = (bool)(uv_cross_ua > 0) + (bool)(uv_cross_ub > 0) + (bool)(uv_cross_uc > 0);

	//3つの外積の中に符号が互いに異なる組があれば交差と判定し，1を返す
	if (count_positive_value == 2 || count_positive_value == 1) {
		return 1;
	}

	//交差しないとき0を返す
	if (count_positive_value == 0 || count_positive_value == 3) {
		return 0;
	}
}

int main()
{
	Vec2 point_on_the_line_u, point_on_the_line_v;
	Vec2 vertex_of_triangle_a, vertex_of_triangle_b, vertex_of_triangle_c;

	std::cout << "Input coordinate(x,y) of first point on the line(-10<x,y<10): \n";
	std::cin >> point_on_the_line_u;
	if (point_on_the_line_u.x < -10 || point_on_the_line_u.x>10 || point_on_the_line_u.y < -10 || point_on_the_line_u.y>10) {
		std::cout << "Input number in (-10,10).\n";
		system("pause");
		return 0;
	}

	std::cout << "Input coordinate(x,y) of second point on the line(-10<x,y<10): \n";
	std::cin >> point_on_the_line_v;
	if (point_on_the_line_v.x < -10 || point_on_the_line_v.x>10 || point_on_the_line_v.y < -10 || point_on_the_line_v.y>10) {
		std::cout << "Error:input number in (-10,10).\n";
		system("pause");
		return 0;
	}

	std::cout << "Input coordinate(x,y) of first vertex of the triangle(-10<x,y<10): \n";
	std::cin >> vertex_of_triangle_a;
	if (vertex_of_triangle_a.x < -10 || vertex_of_triangle_a.x>10 || vertex_of_triangle_a.y < -10 || vertex_of_triangle_a.y>10) {
		std::cout << "Error:input number in (-10,10).\n";
		system("pause");
		return 0;
	}

	std::cout << "Input coordinate(x,y) of second vertex of the triangle(-10<x,y<10): \n";
	std::cin >> vertex_of_triangle_b;
	if (vertex_of_triangle_b.x < -10 || vertex_of_triangle_b.x>10 || vertex_of_triangle_b.y < -10 || vertex_of_triangle_b.y>10) {
		std::cout << "Error:input number in (-10,10).\n";
		system("pause");
		return 0;
	}

	std::cout << "Input coordinate(x,y) of third vertex of the triangle(-10<x,y<10): \n";
	std::cin >> vertex_of_triangle_c;
	if (vertex_of_triangle_c.x < -10 || vertex_of_triangle_c.x>10 || vertex_of_triangle_c.y < -10 || vertex_of_triangle_c.y>10) {
		std::cout << "Error:input number in (-10,10).\n";
		system("pause");
		return 0;
	}

	int is_intersect = isIntersect(point_on_the_line_u, point_on_the_line_v,
		vertex_of_triangle_a, vertex_of_triangle_b, vertex_of_triangle_c);
	if (is_intersect == 1) {
		std::cout << "Intersected!!\n";
	}
	else if (is_intersect == 0) {
		std::cout << "Not intersected.\n";
	}
	else if (is_intersect == -1) {
		std::cout << "Function error.";
	}
	system("pause");
	return 0;
}
