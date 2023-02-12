#include <iostream>

#include <counter.h>

void Counter::first() {
    if (sign == "да") {
        int firstnum = 0;
        std::cout << "¬ведите начальное значение счЄтчика: ";
        std::cin >> firstnum;
        num = firstnum;
    }
}

bool Counter::operation() {
    if (sign == "+") {
        plus();
    }
    if (sign == "-") {
        minus();
    }
    if (sign == "=") {
        print();
    }
    if (sign == "х") {
        return false;
    }
    else {
        return true;
    }
}

void Counter::plus() {
    num++;
}

void Counter::minus() {
    num--;
}

void Counter::print() {
    std::cout << num << std::endl;
}