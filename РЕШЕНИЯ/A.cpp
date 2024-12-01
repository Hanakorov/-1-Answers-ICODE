#include <iostream>

int main()
{
    long long a, b, c;
    std::cin >> a >> b >> c;

    // Вычисляем количество комплектов напрямую
    std::cout << c / (a + b) << std::endl;

    return 0;
}