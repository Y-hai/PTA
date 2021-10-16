#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        double p = (a + b + c) / 2;
        double s = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << floor(s);
    }
    else
        cout << 0;
    return 0;
}