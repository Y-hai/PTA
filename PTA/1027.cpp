#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    char c;
    cin >> n >> c;
    int cs = floor(sqrt((n + 1) / 2));
    int r = n - (2 * cs * cs - 1);
    for (int i = cs; i >= 1; i--)
    {
        int space = 2 * (cs - i) - 1;
        for (int j = 0; j < space; j++)
        {
            cout << " ";
            space--;
        }
        int cnt_c = 2 * i - 1;
        while (cnt_c)
        {
            cout << c;
            cnt_c--;
        }
        cout << endl;
    }
    for (int i = 2; i <= cs; i++)
    {
        int space = 2 * (cs - i) - 1;
        for (int j = 0; j < space; j++)
        {
            cout << " ";
            space--;
        }
        int cnt_c = 2 * i - 1;
        while (cnt_c)
        {
            cout << c;
            cnt_c--;
        }
        cout << endl;
    }
    cout << r;
    return 0;
}