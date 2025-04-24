#include <bits/stdc++.h>
int main()
{
    int q;
    // 待っている人の人数
    std::cin >> q;

    std::queue<int> queue;
    for(int i = 0; i < q; i++)
    {

        int n;
        std::cin >> n;
        if(n == 1)
        {
            // メニュー番号
            int x;
            std::cin >> x;
            queue.push(x);
        }
        else
        {
            std::cout << queue.front() << std::endl;
            queue.pop();
        }
    }

    return 0;
}