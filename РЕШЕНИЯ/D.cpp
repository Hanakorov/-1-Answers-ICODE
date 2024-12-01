#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int c = 0;

    for (int i = 1; i <= n; i += 2)
    {
        double a = i / 5.0 - 2;
        if (a == static_cast<int>(a) && a >= 1)
        { 
            c++;
        }
    }

    std::cout << c << std::endl;

    return 0;
}
