#include <iostream>
#include <algorithm>
using namespace std;

struct AAA
{
    double a, b, c;
} a[1010];

bool cmp(AAA a, AAA b)
{
    return a.c > b.c;
}

int main()
{
    int cnt;
    double num;
    cin >> cnt >> num;
    for (int i = 0; i < cnt; i++)
        cin >> a[i].a;

    for (int i = 0; i < cnt; i++)
    {
        cin >> a[i].b;
        a[i].c = a[i].b / a[i].a;
    }

    double ans = 0;
    sort(a, a + cnt, cmp);
    for (int i = 0; i < cnt; i++)
    {
        if (a[i].a <= num)
        {
            num -= a[i].a;
            ans += a[i].b;
        }
        else
        {
            ans += num * a[i].c;
            break;
        }
    }
    printf("%.2f", ans);
    return 0;
}