#pragma once
#include<array>
#include"constance.h"

//関数を宣言，mainを読み込むときに参照される
bool IsIntersect(std::array<double, DIM> x_1, std::array<double, DIM> x_2, double r_1, double r_2);

