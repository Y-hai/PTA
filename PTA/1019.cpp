#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

vector<int> f(int n, int s)
{
    int cnt = 0;
    vector<int> A;
    while (n)
    {
        A.push_back(n % 10);
        n /= 10;
        cnt++;
    }
    while (cnt < 4)
    {
        A.push_back(0);
        cnt++;
    }
    if (s == 1)
    {
        // 升序
        sort(A.begin(), A.end());
        return A;
    }
    if (s == -1)
    {
        // 降序
        sort(A.begin(), A.end());
        reverse(A.begin(), A.end());
        return A;
    }
    return A;
}

int main()
{
    int n;
    cin >> n;
    vector<int> A = f(n, 0);
    if (A[0] == A[1] && A[1] == A[2] && A[2] == A[3])
    {
        cout << A[0] << A[0] << A[0] << A[0] << " - ";
        cout << A[0] << A[0] << A[0] << A[0] << " = 0000";
        return 0;
    }
    while (1)
    {
        int maxx = 0, minn = 0;
        A = f(n, 1);
        while (A.size())
        {
            maxx = maxx * 10 + A.back();
            A.pop_back();
        }
        cout << maxx << " - ";
        A = f(n, -1);
        while (A.size())
        {
            minn = minn * 10 + A.back();
            cout << A.back();
            A.pop_back();
        }
        cout << " = ";
        int res = maxx - minn;
        if (res < 10)
            cout << "000";
        if (res < 100)
            cout << "00";
        if (res < 1000)
            cout << "0";
        cout << res;
        if (res == 6174)
            break;
        else
            puts("");
        n = res;
    }
    return 0;
}