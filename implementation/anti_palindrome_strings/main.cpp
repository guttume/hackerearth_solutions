/*
You are given a string containing only lowercase alphabets. You can swap two adjacent characters any number of times (including 0).

A string is called anti-palindrome if it is not a palindrome. If it is possible to make a string anti-palindrome, then find the lexicographically smallest anti-palindrome. Otherwise, print -1.

Input format
    The first line contains a single integer denoting the number of test cases. The description of test cases follows.
    Each line contains a string of lower case alphabets only.

Output format
For each test case, print the answer in a new line.

Constraints
1 <= T <= 100
2 <= |S| <= 2 x 10^5
S contains only lowercase alphabets
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool is_palindrome(std::string);
int main()
{
    int t;
    std::cin >> t;
    for (int x = 0; x < t; x++)
    {
        std::string s, ss;
        std::cin >> s;
        ss = s;
        std::reverse(ss.begin(), ss.end());

        if (ss == s)
        {
            std::cout << -1 << std::endl;
        }
        else
        {
            std::sort(s.begin(), s.end());
            std::cout << s << std::endl;
        }
    }

    return 0;
}