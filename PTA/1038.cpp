#include <iostream>
#include <map>
using namespace std;

map<int, int> M;

int main()
{
    int m, n;
    cin >> m;
    while (m--)
    {
        int test = 0;
        cin >> test;
        M[test]++;
    }
    cin >> n;
    int cnt = n;
    while (n--)
    {
        int test = 0;
        cin >> test;
        if (n != cnt - 1)
            cout << ' ';
        cout << M[test];
    }
    puts("");
    return 0;
}