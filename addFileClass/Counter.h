#include <iostream>
//#include <Windows.h>

class Counter {
public:
	int count;

	int countAdd() {
		count++;
		return count;
	}

	int countSubtract() {
		count--;
		return count;
	}

	Counter() {
		count = 1;
	}

	Counter(int initialValue) {
		count = initialValue;
	}

	void methodCounter() {
		std::string question;
		char keyCode;

		setlocale(LC_ALL, "Russian");
	//	SetConsoleCP(1251);
		//SetConsoleOutputCP(1251);

		std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
		std::cin >> question;

		if (question == "да")
		{
			std::cout << "Введите начальное значение счётчика: ";
			std::cin >> count;
			Counter(count);
		}
		if (question == "нет") {
			Counter();
			std::cout << "Начальное значение счётчика: " << count << std::endl;
		}

		while (true)
		{
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> keyCode;

			if (keyCode == '+') {
				countAdd();
				continue;
			}

			if (keyCode == '-') {
			    countSubtract();
				continue;
			}

			if (keyCode == '=') {
				std::cout << count << std::endl;
				continue;
			}

			if (keyCode == 'х') {
				std::cout << "До свидания!" << std::endl;
				break;
			}
		}
	}	
};