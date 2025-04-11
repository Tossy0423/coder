#include <bits/stdc++.h>
int main()
{
    int n;
    std::cin >> n;
    std::vector<int> p(n);
    for(int i = 0; i < n; i++)std::cin >> p.at(i);

    int r;
    for(int i = 0; i < n; i++)
    {
        r = 1;
        for(int j = 0; j < n; j++)if(p[i] < p[j])r++;
        std::cout << r << std::endl;
    }

    return 0;
}