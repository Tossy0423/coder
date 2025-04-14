#include <bits/stdc++.h>
int main()
{
    std::vector<int> a(7);
    for(int i = 0; i < 7; i++)std::cin >> a.at(i);
    // for(int i = 0; i < 7; i++)std::cout << a[i] << " " << std::endl;

    int record[14];
    for(int i = 0; i < 7; i++)record[a[i]]++;
    // for(int i = 0; i < 14; i++)std::cout << record[i] << ", ";

    bool flag = false;
    for(int i = 0; i < 14; i++)
    {
        if(record[i] == 3)for(int j=0; j < 14; j++)if(record[j] == 2)flag = true;
        else if(record[i] == 2)for(int j=0; j < 14; j++)if(record[j] == 3)flag = true;
    }

    if(flag)std::cout << "Yes";
    else std::cout << "No";
    
    return 0;
}