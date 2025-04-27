#include <bits/stdc++.h>
int main()
{
    int n = 0;
    std::cin >> n;

    std::vector<int> a(n);
    for(int i = 0; i < n; i++)std::cin >> a.at(i);

    int ans = 0;
    for(int i = 0; i < n; i += 2)ans += a[i];
    
    std::cout << ans << std::endl;

    return 0;
}