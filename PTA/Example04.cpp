#include <iostream>
#include <cstring>
#include <string>
using namespace std;

const int N = 1e5 + 10;
int n, st[N];

// 埃氏筛
int main()
{
    cin >> n;
    memset(st, true, sizeof st);
    st[0] = st[1] = false;

    for (int i = 2; i <= n; i++)
        if (st[i])
            for (int j = i * 2; j <= n; j += i)
                st[j] = false;

    int count;

    for (int i = 1; i <= n; i++)
        if (st[i])
        {
            cout << i << endl;
            count++;
        }
    cout << "质数数量：" << count << endl;
    return 0;
}