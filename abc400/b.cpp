#include <iostream>

int main()
{
    unsigned long int n, x = 0;
    int m;
    std::cin >> n >> m;
    int y = 1;

    for(int i = 0; i <= m; i++)
    {
        x = x + y;
        if (1000000000 < x)
        {
            std::cout << "inf";
            return 0;
        }
        y = y * n;
    }
    std::cout << x;
}