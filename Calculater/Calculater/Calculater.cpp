#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

// Функция для сложения
double add(double x, double y) {
    return x + y;
}

// Функция для вычитания
double subtract(double x, double y) {
    return x - y;
}

// Функция для умножения
double multiply(double x, double y) {
    return x * y;
}

// Функция для деления
double divide(double x, double y) {
    if (y != 0) {
        return x / y;
    }
    else {
        cout << "Ошибка: Деление на ноль" << endl;
        return 0.0; // Можно также вернуть специальное значение для обозначения ошибки
    }
}

// Функция для возведения в степень
double power(double x, double y) {
    return pow(x, y);
}

// Функция для нахождения квадратного корня
double squareRoot(double x) {
    if (x >= 0) {
        return sqrt(x);
    }
    else {
        cout << "Ошибка: Невозможно извлечь квадратный корень из отрицательного числа" << endl;
        return 0.0; // Можно также вернуть специальное значение для обозначения ошибки
    }
}

// Функция для нахождения 1 процента от числа
double percentageOf(double x) {
    return 0.01 * x;
}

// Функция для нахождения факториала числа
int factorial(int x) {
    if (x < 0) {
        cout << "Ошибка: Невозможно вычислить факториал отрицательного числа" << endl;
        return 0; // Можно также вернуть специальное значение для обозначения ошибки
    }
    else if (x == 0 || x == 1) {
        return 1;
    }
    else {
        int result = 1;
        for (int i = 2; i <= x; ++i) {
            result *= i;
        }
        return result;
    }
}

int main() 
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "RUS");

    while (true) {
        cout << "--К_А_Л_Ь_К_У_Л_Я_Т_О_Р--" << endl;
        cout << "_________________________" << endl;
        cout << "Выберите операцию:" << endl;
        cout << "1. Сложение" << endl;
        cout << "2. Вычитание" << endl;
        cout << "3. Умножение" << endl;
        cout << "4. Деление" << endl;
        cout << "5. Возведение в степень" << endl;
        cout << "6. Нахождение квадратного корня" << endl;
        cout << "7. Нахождение 1 процента от числа" << endl;
        cout << "8. Найти факториал числа" << endl;
        cout << "9. Выйти из программы" << endl;

        int choice;
        cout << "Введите номер операции: ";
        cin >> choice;

        if (choice == 9) {
            cout << "Программа завершена." << endl;
            exit(0);
        }

        double num1, num2;
        cout << "Введите первое число: ";
        cin >> num1;

        if (choice != 6 && choice != 7 && choice != 8) {
            cout << "Введите второе число: ";
            cin >> num2;
        }

        switch (choice) {
        case 1:
            cout << "Результат: " << add(num1, num2) << endl;
            cout << "_________________________" << endl;
            break;
        case 2:
            cout << "Результат: " << subtract(num1, num2) << endl;
            cout << "_________________________" << endl;
            break;
        case 3:
            cout << "Результат: " << multiply(num1, num2) << endl;
            cout << "_________________________" << endl;
            break;
        case 4:
            cout << "Результат: " << divide(num1, num2) << endl;
            cout << "_________________________" << endl;
            break;
        case 5:
            cout << "Результат: " << power(num1, num2) << endl;
            cout << "_________________________" << endl;
            break;
        case 6: 
            cout << "Результат: " << squareRoot(num1) << endl;
            cout << "_________________________" << endl;
            break;
        case 7:
            cout << "Результат: " << percentageOf(num1) << endl;
            cout << "_________________________" << endl;
            break;
        case 8:
            cout << "Результат: " << factorial(static_cast<int>(num1)) << endl;
            cout << "_________________________" << endl;
            break;
        default:
            cout << "Некорректный ввод. Пожалуйста, выберите число от 1 до 9." << endl;
            cout << "_________________________" << endl;
        }
    }

    return 0;
}