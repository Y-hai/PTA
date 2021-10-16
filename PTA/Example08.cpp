#include <iostream>
#include <algorithm>
using namespace std;

typedef pair<int, int> PII;

bool cmp(PII a, PII b)
{
    return a.first < b.first;
}

int main()
{
    PII a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = {100 - i, i};
    }
    sort(a, a + 10, cmp);
    cout << a[0].first;
    return 0;
}