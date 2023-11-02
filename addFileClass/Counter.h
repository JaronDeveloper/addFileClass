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

		std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
		std::cin >> question;

		if (question == "��")
		{
			std::cout << "������� ��������� �������� ��������: ";
			std::cin >> count;
			Counter(count);
		}
		if (question == "���") {
			Counter();
			std::cout << "��������� �������� ��������: " << count << std::endl;
		}

		while (true)
		{
			std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
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

			if (keyCode == '�') {
				std::cout << "�� ��������!" << std::endl;
				break;
			}
		}
	}	
};