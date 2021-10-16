#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int MOD = 1000000007;

int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int p = 0, pt = 0, pta = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'P')
            p++;
        if (s[i] == 'A')
            pt = (pt + p) % MOD;
        if (s[i] == 'T')
            pta = (pta + pt) % MOD;
    }
    cout << pta << endl;
    return 0;
}