#include <iostream>
using namespace std;

int main()
{
    int a, Da, b, Db;
    cin >> a >> Da >> b >> Db;
    int pa = 0, pb = 0;
    while (a)
    {
        if (a % 10 == Da)
            pa = pa * 10 + a % 10;
        a /= 10;
    }
    while (b)
    {
        if (b % 10 == Db)
            pb = pb * 10 + b % 10;
        b /= 10;
    }
    long long res = pa + pb;
    cout << res;

    return 0;
}