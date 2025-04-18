#include <bits/stdc++.h>
#include <atcoder/all>

int main()
{
    int n, m;
    std::cin >> n >> m;

    int ans = 0;
    atcoder::dsu uf(n);

    for(int i = 0; i < n; i++)
    {
        int a, b;
        std::cin >> a >> b;
        a -= 1; 
        b -= 1;
        
        if(uf.same(a, b))
        {
            ans++;
            continue;
        }
        uf.merge(a, b);
    }

    std::cout << ans << std::endl;

    return 0;
}