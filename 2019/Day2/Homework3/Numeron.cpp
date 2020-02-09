#include <iostream>
#include <string>
#include <array>
#include <vector>
const int size = 3;
//array‚Í‚ ‚Ü‚èˆø”‚É‚µ‚È‚¢•û‚ª‚¢‚¢
int eat(std::array<int, size> ans, std::array<int, size> pre) {
	int count = 0;
	for (int i = 0; i < size; ++i) {
		if (ans[i] == pre[i]) {
			++count;
		}
	}
	return count;
}

int main() {
	std::array<int, size> ans = { 1,2,3 }, ply = { 3,6,3 };
	printf("%d \n", eat(ans, ply));
	system("pause");
	return 0;
}
