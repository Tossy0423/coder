#include <iostream>
#include <vector>
#include <string>
int main()
{
    int n;
    std::cin >> n;

    bool login = false;
    int login_error = 0;

    for(int i = 0; i < n; i++)
    {
        std::string s;
        std::cin >> s;

        if(s == "login") login = true;
        else if(s == "logout") login = false;

        if(s == "private" && login == false)login_error++;
    }
    std::cout << login_error << std::endl;

    return 0;
}