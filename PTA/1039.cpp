#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

const int N = 128;
int a[N];

int main()
{
    memset(a, 0, sizeof a);
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    for (int i = 0; i < s1.size(); i++)
        a[int(s1[i])]++;
    for (int i = 0; i < s2.size(); i++)
        a[int(s2[i])]--;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < 128; i++)
    {
        if (a[i] > 0)
            cnt1 += a[i];
        if (a[i] < 0)
            cnt2 += abs(a[i]);
    }
    if (cnt2 == 0)
        cout << "Yes " << cnt1 << endl;
    else
        cout << "No " << cnt2 << endl;
    return 0;
}
