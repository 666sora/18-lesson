#include <iostream>
#include <vector>

void swapvec (std::vector<int>& a, int* b) {
    for (int i = 0; i < a.size(); i++) {
        int temp = a[i];
        a[i] = *(b + i);
        *(b + i) = temp; 
    }
}

int main() {
    std::vector<int> a = {1, 2, 3, 4};
    int b[] = {5, 6, 7, 8};
    swapvec(a, b);
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < a.size(); i++) {
        std::cout << b[i] << " ";
    }
}

/*
Напишите функцию swapvec, принимающую std::vector<int> 
и указатель на массив переменных типа int (одного размера) 
и обменивающую значения этих массивов.
*/