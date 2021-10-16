#include <iostream>
#include <map>
using namespace std;

map<int, int> M;

int main()
{
    int n;
    cin >> n;
    int maxa = 0, maxb = -1;
    while (n--)
    {
        int a, b, c;
        scanf("%d-%d", &a, &b);
        cin >> c;
        M[a] += c;
        if (M[a] > maxb)
        {
            maxb = M[a];
            maxa = a;
        }
    }
    cout << maxa << ' ' << maxb << endl;
    return 0;
}