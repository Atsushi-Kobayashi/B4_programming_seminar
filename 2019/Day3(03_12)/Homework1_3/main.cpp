#include <iostream>
#include <array>

int main() {
	int val = 5;
	const int &ref = val;
	std::cout << "ref=" << ref << ", val=" << val << "\n";
	ref = 10;
	std::cout << "ref=" << ref << ", val=" << val << "\n";
	system("pause");
	return 0;
}