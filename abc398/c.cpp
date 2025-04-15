#include <bits/stdc++.h>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for(int i = 0; i < n; i++)std::cin >> a.at(i);

    std::unordered_map<int, int> cnt;
    for(int i = 0; i < n; i++)cnt[a[i]] += 1;

    int max = -1, ans = -1;
    for(int i = 0; i < n; i++)
    {
        if(2 <= cnt[a[i]])continue;
        if(max < a[i])
        {
            max = a[i];
            ans = i + 1;
        }
    }
    std::cout << ans;

    return 0;
}