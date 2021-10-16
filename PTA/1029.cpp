#include <iostream>
#include <string>
#include <cstring>
#include <set>
using namespace std;

set<char> s;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int len = s1.length();
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            s1[i] = char(s1[i] - 32);

        if (s2[i] >= 'a' && s2[i] <= 'z')
            s2[i] = char(s2[i] - 32);

        if (s1[i] != s2[j])
        {
            if (!s.count(s1[i]))
            {
                cout << s1[i];
                s.insert(s1[i]);
            }
        }
        else
            j++;
    }
    return 0;
}