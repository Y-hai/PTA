#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int n;
    char c;
    cin >> n >> c;
    int r = round(n * 0.5);
    r -= 2;
    for (int i = 0; i < n; i++)
        cout << c;
    cout << endl;
    string s(n - 2, ' ');
    s = c + s + c;
    while (r--)
        cout << s << endl;
    for (int i = 0; i < n; i++)
        cout << c;
    puts("");
    return 0;
}