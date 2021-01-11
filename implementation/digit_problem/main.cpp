#include <iostream>
#include <string>

int main()
{
    std::string s;
    int places;
    std::cin >> s >> places;

    for (int i = 0; i < s.size(); i++)
    {
        if (places == 0)
            break;
        if (s[i] == '9')
            continue;
        s[i] = '9';
        places--;
    }

    std::cout << s << std::endl;

    return 0;
}