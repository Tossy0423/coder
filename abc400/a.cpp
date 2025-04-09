#include <iostream>

int main()
{
    int inputval = 0;
    std::cin >> inputval;

    if(400 % inputval == 0) std::cout << 400 / inputval;
    else std::cout << -1;
    return 0;
}