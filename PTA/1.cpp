#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

typedef long long LL;
const int N = 1e5 + 10;
bool st[N];

void f(int n)
{
    for (int i = 2; i <= n / i; i++)
        if (st[i])
            for (int j = i * 2; j <= n; j += i)
                st[j] = false;
}

int main()
{
    memset(st, true, sizeof st);
    st[0] = st[1] = false;
    int n;
    cin >> n;
    f(n);
    for (int i = 2; i <= n / 2; i++)
    {
        if (st[i] && st[n - i])
        {
            cout << i << " " << n - i;
            break;
        }
    }
    return 0;
}
