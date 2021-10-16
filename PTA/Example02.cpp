#include <iostream>
#include <cstring>
using namespace std;

const int N = 1e5 + 10;
bool st[N];
int n;

// 埃氏筛，筛掉不是质数的数值
int main()
{
    cin >> n;

    memset(st, true, sizeof st);
    st[0] = st[1] = false;

    for (int i = 2; i <= n; i++)
        if (st[i])
            for (int j = 2 * i; j <= n; j += i)
                st[j] = false;

    int next = 2, cnt = 0;
    for (int i = 3; i <= n; i++)
    {
        if (st[i])
        {
            if (i - next == 2)
                cnt++;
            next = i;
        }
    }
    cout << cnt;
    return 0;
}