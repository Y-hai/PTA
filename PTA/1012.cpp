#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e4 + 10;
int arr[N];

int cheak(int n)
{
    if (n % 5 == 0)
        if (n % 2 == 0)
            n = 0;
        else
            n = -1;
    else
        n %= 5;
    return n;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int st = 1;
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, cnt = 0;
    bool ba2 = false;
    for (int i = 1; i <= n; i++)
    {
        int a = cheak(arr[i]);
        if (a == 0)
            a1 += arr[i];
        if (a == 1)
        {
            ba2 = true;
            a2 += arr[i] * st;
            st *= -1;
        }
        if (a == 2)
            a3++;
        if (a == 3)
        {
            a4 += arr[i];
            cnt++;
        }
        if (a == 4)
            a5 = max(a5, arr[i]);
    }
    if (a1)
        cout << a1 << " ";
    else
        cout << 'N' << " ";
    if (ba2)
        cout << a2 << " ";
    else
        cout << 'N' << " ";
    if (a3)
        cout << a3 << " ";
    else
        cout << 'N' << " ";
    if (a4)
        printf("%.1f ", a4 * 1.0 / cnt);
    else
        cout << 'N' << " ";
    if (a5)
        cout << a5;
    else
        cout << 'N';
    return 0;
}