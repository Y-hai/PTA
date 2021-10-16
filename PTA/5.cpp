#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    double v;
    int n;
    cin >> v >> n;
    double y = 0, x = 0;
    for (int i = 0; i < n; i++)
    {
        y = i * 5;
        x = sqrt(2 * y / 9.8) * v;
        int xi = round(x);
        for (int j = 1; j < xi; j++)
        {
            cout << " ";
        }
        cout << '*';
        if (i != n - 1)
            cout << endl;
    }

    return 0;
}