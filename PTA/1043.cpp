#include <iostream>
#include <map>
#include <cstring>
#include <string>
#include <set>
using namespace std;

map<char, int> M;

int main()
{
    string s;
    cin >> s;
    int len = s.size();
    for (int i = 0; i < len; i++)
        M[s[i]]++;

    int a[6];
    a[0] = M['P'], a[1] = M['A'], a[2] = M['T'], a[3] = M['e'], a[4] = M['s'], a[5] = M['t'];
    string ch = "PATest";
    while (true)
    {
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            if (a[i])
            {
                cout << ch[i];
                a[i]--;
                sum += a[i];
            }
        }
        if (sum == 0)
            break;
    }
    puts("");
    return 0;
}