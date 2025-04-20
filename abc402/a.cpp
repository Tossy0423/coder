#include <bits/stdc++.h>
int main()
{
    std::string s, ans;
    std::cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if(isupper(s[i])) ans += s[i];
    }
    std::cout << ans  <<std::endl;

}