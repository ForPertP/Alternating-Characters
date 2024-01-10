#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'alternatingCharacters' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int alternatingCharacters(string s)
{
    int result = 0;

    for (size_t i = 0; i < s.size()-1; ++i)
    {
        if (s[i] == s[i + 1])
        {
            result++;
        }
    }
    
    return result;
}
