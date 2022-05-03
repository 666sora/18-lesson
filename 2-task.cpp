#include <iostream>

int findCombinations(int n, int l) {
    if (n == 0) {
        return 1;
    }
    if (n < 0 || l < 1) {
        return 0;
    }
    return findCombinations(n - l, 3) + findCombinations(n, l - 1);
}

int main() {
    int n;
    std::cout << "Input number of step: ";
    std::cin >> n;
    std::cout << "Total combinations are " << findCombinations(n, 3);
}

/*
Кролик сидит на нулевой ступеньке большой лестницы. 
Он может прыгать на 1, 2 или 3 ступеньки вверх. Кролик 
хочет допрыгать до n-й ступеньки, но может сделать это большим количеством способов. 
Напишите рекурсивную функцию, которая принимает число n типа int, 
а возвращает количество способов, которыми кролик может доскакать до n-й ступеньки. 
*/