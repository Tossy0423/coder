#include <bits/stdc++.h>
#include <string>
int main()
{
    std::string s;
    std::cin >> s;

    int cnt_process = 0;
    std::string ans;
    int ans_pos = 0;
    for(int i = 0; i < (int)s.size(); i++)
    {
        // std::cout << s[i] << std::endl;
        // std::cout << (i % 2) << std::endl;
        if(i % 2 == 0 && s[i] != 'i')
        {
            ans += 'o';
            ans_pos++;
            ans[ans_pos] += s[i];
            cnt_process++;
        }else if(i % 2 != 0 && s[i] != 'o'){
            ans += 'i';
            ans_pos++;
            ans[ans_pos] += s[i];
            cnt_process++;
        }
    }
    
    if(s[s.size() - 1] != 'o'){
        ans += 'o';
        cnt_process++;
    }
    // std::cout << ans << std::endl; 



    // std::cout << ans << std::endl;
    std::cout << cnt_process << std::endl;
    
    return 0;
}