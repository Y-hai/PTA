#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e5 + 10;
int arr[N];

int main()
{
    int n, lenTemp = 0;
    long long p;
    cin >> n >> p;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)               // 小下标
        for (int j = i + lenTemp; j < n; j++) // 大下标
        {
            if (arr[i] * p >= arr[j])
                lenTemp = j - i + 1;
            else
                break;
        }

    cout << lenTemp << endl;
    return 0;
}
