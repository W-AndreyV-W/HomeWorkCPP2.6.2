#include <iostream>
#include <windows.h>

#include <counter.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Counter signs;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> signs.sign;
    signs.first();
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> signs.sign;
    } while (signs.operation());
    std::cout << "До свидания!" << std::endl;
}
