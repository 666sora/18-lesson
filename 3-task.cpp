#include <iostream>

int findCombinations(int n, int* k, int l = 3) {
    if (n == 0) {
        return 1;
    }
    if (n < 0 || l < 1) {
        return 0;
    }
    return findCombinations(n - l, &l, *k) + findCombinations(n, &l, l - 1);
}

int main() {
    int n, l;
    std::cout << "Input number of step: ";
    std::cin >> n;
    std::cout << "Input how long jump is: ";
    std::cin >> l;
    std::cout << "Total combinations are " << findCombinations(n, &l, l);
}

/*
Кролик сидит на нулевой ступеньке большой лестницы. 
Он может прыгать на одну или более ступенек вверх, 
но не далее чем на k. Кролик хочет допрыгать до n-й 
ступеньки, но может сделать это большим количеством способов. 
Напишите рекурсивную функцию, которая принимает число n типа 
int и число k — максимальную длину прыжка, а возвращает 
количество способов, которым кролик может доскакать до n-й ступеньки. 
Если максимальная длина прыжка не задана — считать её равной трём.
*/