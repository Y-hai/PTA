#include <iostream>
#include <map>
using namespace std;

map<int, int> m;

int main()
{
    int max_num = 0, max_score = -1;
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        m[a] += b;
        if (m[a] > max_score)
        {
            max_num = a;
            max_score = m[a];
        }
    }
    cout << max_num << " " << max_score << endl;
    return 0;
}