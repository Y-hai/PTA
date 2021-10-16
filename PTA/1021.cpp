#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    int a[10];
    memset(a, 0, sizeof a);
    string s;
    cin >> s;

    for (int i = 0; s[i]; i++)
        a[s[i] - '0']++;

    for (int i = 0; i < 10; i++)
        if (a[i])
            cout << i << ':' << a[i] << endl;
    return 0;
}