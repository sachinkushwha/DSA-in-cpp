#include <iostream>
using namespace std;
int main()
{
    string s = "ved";
    int vowel=0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vowel += 1;
        }
    }
    cout << vowel;
    return 0;
}