#include <iostream>
#include <cstdlib>

int numbersFibonacci(int variable) {

	if (variable == 0) { return 0; }
	if(variable == 1){ return 1; }
	return numbersFibonacci(variable - 1) + numbersFibonacci(variable - 2);
}

int main() {
	setlocale(LC_ALL, "RU");

	int itemNumber{};

	std::cout << "Введите число: ";
	std::cin >> itemNumber;
	std::cout << "Числа Фибоначчи: ";

	for (int element{}; element < itemNumber; ++element) {
		std::cout << numbersFibonacci(element) << " ";
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}