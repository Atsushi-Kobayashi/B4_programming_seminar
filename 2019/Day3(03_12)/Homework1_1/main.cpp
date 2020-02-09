#include <iostream>
#include <array>

//int main() {
//
//	int val = 5;
//	int val1 = 8;
//	const int *const ptr = &val;
//	std::cout << "*ptr=" << *ptr << ", val=" << val << ", val1=" << val1 << "\n";
//	ptr = &val1;
//	std::cout << "*ptr=" << *ptr << ", val=" << val << ", val1=" << val1 << "\n";
//	system("pause");
//	return 0;
//}


//int main() {
//	int val = 5;
//	int *const ptr = &val;
//	std::cout << "*ptr=" << *ptr << ", val=" << val << "\n";
//	*ptr = 10;
//	std::cout << "*ptr=" << *ptr << ", val=" << val << "\n";
//
//	system("pause");
//	return 0;
//}

int main() {
	const int val = 5;
	int *const ptr = &val;
	std::cout << "*ptr=" << *ptr << ", val=" << val << "\n";
	system("pause");
	return 0;
}