/*
{a,e,i,o,u,A,E,I,O,U}
Natural Language Understanding is the subdomain of Natural Language Processing where people used to design AI based applications have ability to understand the human languages. HashInclude Speech Processing team has a project named Virtual Assistant. For this project they appointed you as a data engineer (who has good knowledge of creating clean datasets by writing efficient code). As a data engineer your first task is to make vowel recognition dataset. In this task you have to find the presence of vowels in all possible substrings of the given string. For each given string you have to print the total number of vowels.

Input
First line contains an integer T, denoting the number of test cases.
Each of the next lines contains a string, string contains both lower case and upper case .

Output
Print the vowel sum
Answer for each test case should be printed in a new line.

Input Constraints
1<=T<=10
1<=|S|<=100000
*/
#include <iostream>
#include <string>

int main()
{
    int t;
    std::cin >> t;
    for (int x = 0; x < t; x++)
    {
        std::string s;
        std::cin >> s;
        long s_len = s.size();
        long total_vowels = 0;
        for (int i = 0; i < s_len; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                total_vowels += (s_len - i) * (i + 1);
            }
        }
        std::cout << total_vowels << std::endl;
    }
    return 0;
}