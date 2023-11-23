#include <iostream>
#include <string>

using namespace std;

class Counter {
private:
	int counter_var = 0;
public:
	int increment_counter() {
		return ++counter_var;
	}

	int decrement_counter() {
		return --counter_var;
	}

	int print_counter_state() {
		return counter_var;
	}

	Counter(int counterValue) {
		counter_var = counterValue;
	}
};

int main(int argc, char** argv) {
    system("chcp 1251");
	int initialCounterValue = 0;
	string setInitialState = "";
    bool initCounter = false;
    
    do {
        cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        cin >> setInitialState;

        if (setInitialState == "да" || setInitialState == "Да") {
            cout << "Введите начальное значение счётчика: ";
            cin >> initialCounterValue;
            initCounter = true;
        }
        else if (setInitialState == "нет" || setInitialState == "Нет") {
            initCounter = true;
        }
        else {
            std::cout << "Вы ввели неверную команду.";
        }
    } while (!initCounter);

    Counter counter(initialCounterValue);
    cout << std::endl;
    string commandSing = "";
    bool getCommand = false;
   
    do {
        cout << "Введите команду ('+', '-', '=' или 'х'): ";
        cin >> commandSing;

        if (commandSing == "х") {
            cout << "До свидания!";
            getCommand = true;
        }
        else if (commandSing == "+") {
            counter.increment_counter();
        }
        else if (commandSing == "-") {
            counter.decrement_counter();
        }
        else if (commandSing == "=") {
            cout << "Значение счетчика: " << counter.print_counter_state() << endl;
    }
        else {
            cout << "Вы ввели неверную команду." << endl;
        }
    } while (!getCommand);
    return 0;
}   