#include <bits/stdc++.h>
int main()
{
    float x;
    std::cin >> x;

    if(x < 37.5)std::cout << "3";
    else if(37.5 <= x && x < 38.0)std::cout << "2";
    else if(38.0 <= x)std::cout << "1";

    return 0;
}