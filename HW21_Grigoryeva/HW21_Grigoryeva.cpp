#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	std::cout << "Enter first number :\n";
	std::cin >> x;
	std::cout << "Enter second number :\n";
	std::cin >> y;
	int* px = &x;
	int* py = &y;
	int mean = (*px + *py) / 2;
	std::cout << "Mean = " << mean << '\n';

	return 0;
}