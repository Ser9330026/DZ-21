/*Создайте переменные X и Y, значения которых
вводит пользователь.Далее определите для них
указатели px и py.
Задача
Обращаясь к переменным X и Y через указатели
найдите среднее арифметическое их значений*/


#include <iostream>

template <typename T>
double agv_function(T* X, T* Y) {
    return (*X + *Y) / 2;
}



int main() {
    setlocale(LC_ALL, "rus");
    double x, y;
    double agv;

    std::cout << "Введите два числа:\n";
    std::cin >> x >> y;
    std::cout << "Среднее арифметическое двух чисел: " << agv_function(&x, &y);

    return 0;
}