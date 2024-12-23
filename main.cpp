#include "std.h"
#include <iostream>
//Программа является учебной
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b;
	std::cout << "Введите a и b: ";
	std::cin >> a >> b; 
	std::cout << "a + b = " << a+b << std::endl;
	std::cout << "a - b = " << a-b << std::endl;
	return 0;
}