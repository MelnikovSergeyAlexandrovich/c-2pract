﻿// calc).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

using namespace std;

float num_1;
float num_2; //Обьявление глобальных переменных - 2 чисел, которые вводятся для реализации операций над ними

void input()
{
	cout << "Введите 1 число\n";
	cin >> num_1; // Метод, который нужен для ввода переменных для реализации операций над ними
	cout << "Введите 2 число\n";
	cin >> num_2;
}

void menu()
{
	
	int operation;
	cout << "Выберете действие:\n 1. Сложение\n 2. Вычитание \n 3. Умножение \n 4. Деление \n 5. Возведение в степень \n 6. Найти Квадратный Корень числа \n 7. Найти определённый процент от числа \n 8. Выход из программы \n";
	cin >> operation; // Основной метод, в котором реализовано меню с выбором 7 различных операций и выходом из программы. Операция выбирается с помощью числа.
	if (operation < 1 || operation > 8)
	{
		cout << "Ошибка. Такой операции не существует."; // Данный цикл if создан для вывода ошибки при вводе несуществующей операции
	}
	switch (operation) // цикл switch реализует с помощью переменной operation операции, которые зависят от введенного пользователем числа 
	{
		case 1:
			input();
			cout << "Ответ: " << num_1 + num_2 << "\n"; //Операция сложения 
			menu();
		case 2:
			input();
			cout << "Ответ: " << num_1 - num_2 << "\n"; //Операция вычитания
			menu();
		case 3:
			input();
			cout << "Ответ: " << num_1 * num_2 << "\n"; //Операция умножения 
			menu();
		case 4:
			input();
			cout << "Ответ: " << num_1 / num_2 << "\n"; //Операция деления
			menu();
		case 5:
			input();
			cout << "Ответ: " << pow(num_1, num_2 ) << "\n"; //Операция нахождения степени числа
			menu();
		case 6:
			cout << "Введите число, для нахождения квадратного корня\n"; //Операция нахождения квадратного корня
			cin >> num_1;
			cout << "Ответ: " << sqrt(num_1) << "\n";
			menu();
		case 7:
			input();
			cout << "Ответ: " << num_1 * (0.01 * num_2) << "\n"; //Операция нахождения определённого % от числа 
			menu();
		case 8:
			exit(0); //Выход из программы

	}
}

void main()
{
	SetConsoleCP(1251); // Данные 2 строки нужны для правильной кодировки и правильного вывода русских символов
	setlocale(LC_ALL, "Russian");
	menu(); // Объявление метода основного меню для работы программы.
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
