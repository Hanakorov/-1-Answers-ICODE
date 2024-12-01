#include <iostream>

int reverseNumber(int num)
{
    int reversed = 0;
    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main()
{
    int y;
    std::cin >> y;

    for (int x = 100; x <= 999; ++x)
    {
        int reversedX = reverseNumber(x);
        if (x + reversedX == y)
        {
            std::cout << x << std::endl;
            return 0;
        }
    }

    std::cout << -1 << std::endl;
    return 0;
}
