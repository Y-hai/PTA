#include <iostream>
using namespace std;

typedef long long LL;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        LL a, b, c;
        cin >> a >> b >> c;
        if (a + b > c)
            printf("Case #%d: true", i);
        else
            printf("Case #%d: false", i);
        if (i < n)
            cout << endl;
    }
    return 0;
}