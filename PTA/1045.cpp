#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

typedef pair<int, int> PII;
const int N = 1e5 + 10;
int a[N], res[N];
PII p[N];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    p[0].first = -1;
    for (int i = 1; i < n; i++)
    {
        p[i].first = max(p[i - 1].first, a[i - 1]);
    }
    p[n - 1].second = 0x3f3f3f3f;
    for (int i = n - 2; i >= 0; i--)
    {
        p[i].second = min(p[i + 1].second, a[i + 1]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= p[i].first && a[i] <= p[i].second)
            res[cnt++] = a[i];
    }
    cout << cnt << endl;
    sort(res, res + cnt);
    for (int i = 0; i < cnt; i++)
    {
        if (i)
            cout << ' ';
        cout << res[i];
    }
    puts("");
    return 0;
}