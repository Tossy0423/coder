#include <bits/stdc++.h>
int main()
{
    std::vector<int> a(7);

    // 入力
    for(int i = 0; i < 7; i++)std::cin >> a.at(i);

    // カウント用配列定義して入力された数をカウント
    std::vector<int> record(14,0);
    for(int i = 0; i < 7; i++)record[a[i]]++;

    // ソート
    std::sort(record.rbegin(), record.rend());

    if(3 <= record[0] && 2 <= record[1])std::cout << "Yes";
    else std::cout << "No";
    
    return 0;
}