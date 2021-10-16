#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int index = s.length() - 1;
    int you = index;
    while (index >= 0)
    {
        while (s[index] != ' ' && index >= 0)
            index--;
        for (int i = index + 1; i <= you; i++)
            cout << s[i];
        if (index > 0)
            cout << " ";
        you = --index;
    }
    return 0;
}