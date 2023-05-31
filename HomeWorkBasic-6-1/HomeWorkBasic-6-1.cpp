#include <iostream>
#include "ArithmeticOperation.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите первое число: \n";
    double firstNum{}, secondNum{}, result{};
    int operation{};
    std::cin >> firstNum;
    std::cout << "Введите второе число: \n";
    std::cin >> secondNum;
    std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): \n";
    std::cin >> operation;

    switch (operation)
    {
    case 1:
        Print(firstNum, secondNum, operation);
        std::cout << Sum(firstNum, secondNum);
        break;
    case 2:
        Print(firstNum, secondNum, operation);
        std::cout << Subtraction(firstNum, secondNum);
        break;
    case 3:
        Print(firstNum, secondNum, operation);
        std::cout << Multiplication(firstNum, secondNum);
        break;
    case 4:
        if (secondNum == 0) {
            std::cout << "Деление на 0 запрещено!";
            break;
        }
        else {
            Print(firstNum, secondNum, operation);
            std::cout << Division(firstNum, secondNum);
            break;
        }
    case 5:
        Print(firstNum, secondNum, operation);
        std::cout << Exponentiation(firstNum, secondNum);
        break;
    default:
        std::cout << "Операции под номером " << operation << " не существует!";
        break;
    }
}

