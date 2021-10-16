#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string res;
    if (n)
    {
        int test = n % 10;
        for (int i = 1; i <= test; i++)
            res += to_string(i);
        n /= 10;
    }
    if (n)
    {
        int test = n % 10;
        string s;
        for (int i = 1; i <= test; i++)
            s += "S";
        res = s + res;
        n /= 10;
    }
    if (n)
    {
        int test = n % 10;
        string s;
        for (int i = 1; i <= test; i++)
            s += "B";
        res = s + res;
    }
    cout << res;
    return 0;
}