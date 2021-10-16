#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    m %= n;
    for (int i = n - m + 1; i <= n; i++)
        cout << arr[i] << " ";
    for (int i = 1; i <= n - m; i++)
        if (i != n - m)
            cout << arr[i] << " ";
        else
            cout << arr[i];
    return 0;
}