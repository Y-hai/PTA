#include <iostream>
#include <set>
#include <string>
#include <cstring>
using namespace std;

set<char> s;

bool check(char c)
{
    if (c >= 'A' && c <= 'Z' && s.count('+'))
        return false;
    if (s.count(c))
        return false;
    return true;
}

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < s1.length(); i++)
    {
        char c = s1[i];
        if (c >= 'a' && c <= 'z')
        {
            s.insert(c);
            s.insert(char(c - 32));
        }
        else if (c >= 'A' && c <= 'Z')
        {
            s.insert(c);
            s.insert(char(c + 32));
        }
        else
            s.insert(s1[i]);
    }
    for (int i = 0; i < s2.length(); i++)
        if (check(s2[i]))
            cout << s2[i];
    cout << endl;
    return 0;
}