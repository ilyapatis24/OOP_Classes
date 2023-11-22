#include <iostream>
#include <locale.h>

using namespace std;

class Calculator {
public:
	double calc_number1 = 0, calc_number2 = 0;

	double add() {
		return this->calc_number1 + this->calc_number2;
	}

	double multiply() {
		return this->calc_number1 * this->calc_number2;
	}

	double subtract_1_2() {
		return this->calc_number1 - this->calc_number2;
	}

	double subtract_2_1() {
		return this->calc_number1 - this->calc_number2;
	}

	double divide_1_2() {
		return this->calc_number1 / this->calc_number2;
	}

	double divide_2_1() {
		return this->calc_number2 / this->calc_number1;
	}

	bool set_num1(double num1) {
		if (num1 != 0) {
			this->calc_number1 = num1;
			return true;
		}
		return false;
	}

	bool set_num2(double num2) {
		if (num2 != 0) {
			this->calc_number2 = num2;
			return true;
		}
		return false;
	}

};

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Russian");
	Calculator calc;
	double num1 = 0, num2 = 0;
	while (true) {
		do {
			cout << "Введите num1: ";
			cin >> num1;
			if (!calc.set_num1(num1))
			{
				std::cout << "Неверный ввод! " << std::endl;
			};
		} while (!calc.set_num1(num1));

		do {
			cout << "Введите num2: ";
			cin >> num2;
			if (!calc.set_num2(num2))
			{
				std::cout << "Неверный ввод! " << std::endl;
			};
		} while (!calc.set_num2(num2));
		cout << "num1 + num2 = " << calc.add() << endl;
		cout << "num1 - num2 = " << calc.subtract_1_2() << endl;
		cout << "num2 - num1 = " << calc.subtract_2_1() << endl;
		cout << "num1 * num2 = " << calc.multiply() << endl;
		cout << "num1 / num2 = " << calc.divide_1_2() << endl;
		cout << "num2 / num1 = " << calc.divide_2_1() << endl;
	}
	return 0;
}

