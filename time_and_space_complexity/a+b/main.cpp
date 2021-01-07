#include <iostream>
#include <string>

std::string reverse_string(std::string);
int main()
{
    std::string x, y;
    while (std::cin >> x >> y)
    {
        int x_len = x.size();
        int y_len = y.size();
        std::string result = "";
        x = reverse_string(x);
        y = reverse_string(y);
        int sum = 0;
        int remainder = 0;
        std::string *smaller = x_len < y_len ? &x : &y;
        std::string *bigger = x_len > y_len ? &x : &y;
        int i = 0;
        while (i < (*smaller).size())
        {
            sum = (int)(x[i] - '0') + (int)(y[i] - '0') + remainder;
            result += std::to_string(sum % 10);
            remainder = sum / 10;
            i++;
        }
        if (x_len != y_len)
        {
            while (i < (*bigger).size())
            {
                sum = remainder + (int)((*bigger)[i] - '0');
                result += std::to_string(sum % 10);
                remainder = sum / 10;
                i++;
            }
        }
        std::cout << reverse_string(result) << std::endl;
    }
}

std::string reverse_string(std::string str)
{
    std::string new_str = "";
    for (int i = str.size() - 1; i >= 0; i--)
    {
        new_str = new_str + str[i];
    }
    return new_str;
}