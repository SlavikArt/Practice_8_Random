#include <iostream>
using namespace std;

int myRandom(int min, int max) {
	int k = max - min + 1;
	return rand() % k + min;
}

int main()
{
	setlocale(0, "rus");

	srand(time(0)); // запуск алгоритма генерации случайных чисел
	rand();
	
	string question;
	const int SIZE = 15;

	string arr[SIZE] = { "Да", "Конечно", "Естественно", "Конечно да!", "Это не обсуждается, да!",
		"Нет!", "Конечно нет", "Думаю что нет", "Скорее нет чем да", "Нет! Это исключено!",
		"Не могу ответить", "Не знаю", "Затрудняюсь ответить", "Может быть", "Точно не могу сказать"
	};

	while (true)
	{
		cout << "Введите ваш вопрос:\n";
		cin >> question;

		cout << arr[myRandom(0, 14)] << "\n";

		system("pause");
		system("cls");
	}
}