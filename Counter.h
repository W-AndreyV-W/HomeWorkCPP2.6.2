#pragma once

class Counter {
public:
    std::string sign;
    void first();
    bool operation();
    void plus();
    void minus();
    void print();
private:
    int num = 1;
};