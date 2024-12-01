#include <iostream>

int main()
{
    int x, y, z;
    std::cin >> x >> y >> z;

    int total = x + y + z;

    if (total == 5)
    {
        std::cout << "Alikhan is a genius" << std::endl;
    }
    else
    {
        std::cout << "Anyway genius" << std::endl;
    }

    return 0;
}
