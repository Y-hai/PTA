#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    double r1, r2;
    double a, b, c;
    cin >> a >> b >> c;
    if (b * b - 4 * a * c < 0)
    {
        cout << "no solution";
        return 0;
    }
    double data = sqrt(b * b - 4 * a * c);
    r1 = (b + data) / (-2 * a);
    r2 = (b - data) / (-2 * a);
    if (abs(r1) < 0.01)
        r1 = 0;
    if (abs(r2) < 0.01)
        r1 = 0;
    if (r1 == r2)
    {
        printf("%.2f", r1);
    }
    else if (r1 > r2)
    {
        printf("%.2f %.2f", r1, r2);
    }
    else
    {
        printf("%.2f %.2f", r2, r1);
    }
    return 0;
}