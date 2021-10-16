#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;

map<int, int> M;

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
        M[a]++;
    }
    int maxcnt = -1;
    int maxx = 0;
    for (int i = 0; i < 10; i++)
    {
        if (M[arr[i]] > maxcnt)
        {
            maxcnt = M[arr[i]];
            maxx = arr[i];
        }
        if (M[arr[i]] == maxcnt)
            maxx = min(maxx, arr[i]);
    }
    cout << maxx << " " << maxcnt;
    return 0;
}