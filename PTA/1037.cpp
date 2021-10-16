#include <iostream>
#include <string>
using namespace std;

typedef long long LL;

int main()
{
    int a, b, c;
    scanf("%d.%d.%d", &a, &b, &c);
    LL A = a * 17 * 29 + b * 29 + c;
    scanf("%d.%d.%d", &a, &b, &c);
    LL B = a * 17 * 29 + b * 29 + c;
    LL res = B - A;
    if (res < 0)
    {
        cout << '-';
        res *= -1;
    }
    cout << res / 493 << '.' << res % 493 / 29 << '.' << res % 493 % 29 << endl;
    return 0;
}