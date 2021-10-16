#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int time = b - a;
    time = round(time / 100.0);
    int hh, mm, ss;
    hh = time / 3600;
    mm = time % 3600 / 60;
    ss = time % 60;
    if (hh < 10)
        cout << '0';
    cout << hh << ':';
    if (mm < 10)
        cout << '0';
    cout << mm << ':';
    if (ss < 10)
        cout << '0';
    cout << ss;
    return 0;
}