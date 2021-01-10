/*
You are given a string S. Count the number of occurrences of all the digits in the string S.

Input:
First line contains string S.

Output:
For each digit starting from 0 to 9, print the count of their occurrences in the string S. So, print

lines, each line containing 2 space separated integers. First integer i and second integer count of occurrence of i. See sample output for clarification.

Constraints:
1 <= |S| <= 100
*/

#include <iostream>
#include <string>
#include <cctype>
#include <map>

int main()
{
    std::map<char, int> digits = {{'0', 0}, {'1', 0}, {'2', 0}, {'3', 0}, {'4', 0}, {'5', 0}, {'6', 0}, {'7', 0}, {'8', 0}, {'9', 0}};
    std::string str;
    std::cin >> str;
    for (const char &ch : str)
    {
        if (isdigit(ch))
        {
            digits[ch] = digits[ch] + 1;
        }
    }

    for (const std::pair<char, int> key : digits)
    {
        std::cout << key.first << " " << key.second << std::endl;
    }

    return 0;
}