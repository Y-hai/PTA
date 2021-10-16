#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] = (char)(s[i] - 32);
            continue;
        }
        if (s[i - 1] == '_' && s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = (char)(s[i] - 32);
        }
    }
    for (int i = 0; i < n; i++)
        if (s[i] != '_')
            cout << s[i];
    return 0;
}