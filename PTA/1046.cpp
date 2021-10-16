#include <iostream>
using namespace std;

int main()
{
    int res1 = 0, res2 = 0;
    int n;
    cin >> n;
    while (n--)
    {
        bool A = false, B = false;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = a + c;
        if (b == ans)
            A = true;
        if (d == ans)
            B = true;
        if (A == B)
            continue;
        if (A)
            res2++;
        else
            res1++;
    }
    cout << res1 << ' ' << res2 << endl;
    return 0;
}