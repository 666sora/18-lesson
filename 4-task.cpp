#include <iostream>

void evendigits(long long& n, int& answer) {
    if ((n % 10) % 2 == 0 && n != 0) {
        answer++;
    }
    if (n != 0) {
        n /= 10;
        evendigits(n, answer);
    }
}

int main() {
    long long n;
    int answer = 0;
    std::cout << "Input long number: ";
    std::cin >> n;
    evendigits(n, answer);
    std::cout << "Answer is " << answer;
}

/*
Напишите рекурсивную функцию, которая принимает 
большое число n типа long long и переменную ans, 
а возвращает void. После завершения работы функции 
в переменной ans должно оказаться количество чётных 
цифр в записи числа n.
*/