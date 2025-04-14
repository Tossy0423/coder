#include<iostream>
int main()
{
    int n;
    std::cin >> n;

    if(n % 2 == 0)
    {
        for(int i = 0; i < n; i++)
        {
            if(i < (n-2)/2)std::cout << "-";
            else if ((n-2)/2 <= i && i <= ((n-2)/2 +1)) std::cout << "=";
            else if ((n-2)/2 < i && i <= n) std::cout << "-";
        }
    }else
    {
        for(int i = 0; i < n; i++)
        {
            if(i < (n-1)/2)std::cout << "-";
            else if ((n-1)/2 <= i && i <= ((n-1)/2)) std::cout << "=";
            else if ((n-1)/2 < i && i <= n) std::cout << "-";
        }
    }

    return 0;
}