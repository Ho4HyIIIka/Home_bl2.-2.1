#include <iostream>

class Calculator
{
private:
	double num1 = 0;
	double num2 = 0;

public:
	double get_add() {
		double sum = 0;
		sum = num1 + num2;
		return sum;
	}
	double get_multiply() {
		double sum = 0;
		sum = num1 * num2;
		return sum;
	}
	double get_subtruct_1_2() {
		double sum = 0;
		sum = num1 - num2;
		return sum;
	}
	double get_subtruct_2_1() {
		double sum = 0;
		sum = num2 - num1;
		return sum;
	}
	double get_divide_1_2() {
		double sum = 0;
		sum = num1 / num2;
		return sum;
	}
	double get_divide_2_1() {
		double sum = 0;
		sum = num2 / num1;
		return sum;
	}
	bool set_num1(double num1) {
		if (num1 == 0) {
			return false;
		}
		else {
			this->num1 = num1;
			return true;
		}
	}
	bool set_num2(double num2) {
		if (num2 == 0) {
			return false;
		}
		else {
			this->num2 = num2;
			return true;
		}
	}
};

int main() {

	double a = 0;
	double b = 0;

	Calculator calcul;

	for (;;) {

		std::cout << "Enter number 1: ";
		std::cin >> a;

		std::cout << "Enter number 2: ";
		std::cin >> b;

		if (calcul.set_num1(a) == 0 || calcul.set_num2(b) == 0) {
			std::cout << "Wrong enter!" << std::endl;
		}
		else {
			std::cout << "num1 + num2 = " << calcul.get_add() << std::endl;
			std::cout << "num1 * num2 = " << calcul.get_multiply() << std::endl;
			std::cout << "num1 - num2 = " << calcul.get_subtruct_1_2() << std::endl;
			std::cout << "num2 - num1 = " << calcul.get_subtruct_2_1() << std::endl;
			std::cout << "num1 / num2 = " << calcul.get_divide_1_2() << std::endl;
			std::cout << "num2 / num1 = " << calcul.get_divide_2_1() << std::endl;
		}
	}

	return 0;
}

