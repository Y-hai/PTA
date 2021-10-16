#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int check(char a, char b)
{
    if (a == b)
        return 0;
    if ((a == 'B' && b == 'C') || (a == 'C' && b == 'J') || (a == 'J' && b == 'B'))
        return 1;
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a1 = 0, a2 = 0, a3 = 0, b1 = 0, b2 = 0, b3 = 0;
    int ab = 0, ac = 0, aj = 0, bb = 0, bc = 0, bj = 0;
    while (n--)
    {
        char a, b;
        cin >> a >> b;
        int res = check(a, b);
        if (res == 0)
        {
            a3++;
            b3++;
        }
        if (res == 1)
        {
            a1++;
            b2++;
            if (a == 'B')
                ab++;
            if (a == 'C')
                ac++;
            if (a == 'J')
                aj++;
        }
        if (res == -1)
        {
            a2++;
            b1++;
            if (b == 'B')
                bb++;
            if (b == 'C')
                bc++;
            if (b == 'J')
                bj++;
        }
    }
    cout << a1 << " " << a3 << " " << a2 << endl;
    cout << b1 << " " << b3 << " " << b2 << endl;
    int maxa = max(max(ab, ac), aj);
    int maxb = max(max(bb, bc), bj);
    if (maxa == ab)
        cout << 'B';
    else if (maxa == ac)
        cout << 'C';
    else if (maxa == aj)
        cout << 'J';
    cout << " ";
    if (maxb == bb)
        cout << 'B';
    else if (maxb == bc)
        cout << 'C';
    else if (maxb == bj)
        cout << 'J';
    return 0;
}