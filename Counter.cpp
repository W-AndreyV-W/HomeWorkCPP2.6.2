#include <iostream>

#include <counter.h>

void Counter::first() {
    if (sign == "��") {
        int firstnum = 0;
        std::cout << "������� ��������� �������� ��������: ";
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
    if (sign == "�") {
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