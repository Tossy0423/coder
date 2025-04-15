#include <bits/stdc++.h>
#include <vector>

int main()
{
    int n;
    std::cin >> n;

    std::vector<unsigned int> a(n);
    for(int i = 0; i < n; i++)std::cin >> a.at(i);
    for(int i = 0; i < n; i++)std::cout << a[i] << " ";

    std::sort(a.rbegin(), a.rend());

    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i] != a[j] && i != j )flag = false;
            else flag = true;
            // std::cout << a[i] << ", " << a[j] << std::endl;
        }
    }

    if(flag)std::cout << "-1";
    else std::cout << "--1";


    return 0;
}