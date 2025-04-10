#include <iostream>
int main()
{
    int n;
    char s[100], t[100];
    std::cin >> n;
    std::cin >> s >> t;
    // std::cin >> t;

    // std::cout << "-----" << std::endl;
    // std::cout << n << std::endl;
    // std::cout << s << std::endl;
    // std::cout << t << std::endl;

    int cnt_diff = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] != t[i])++cnt_diff;
    }
    std::cout << cnt_diff;

    return 0;
}