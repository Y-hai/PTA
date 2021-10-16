#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    a = a + b;
    if (!a)
    {
        cout << 0;
        return 0;
    }
    vector<int> v;
    while (a)
    {
        v.push_back(a % c);
        a /= c;
    }
    while (v.size())
    {
        cout << v.back();
        v.pop_back();
    }
    return 0;
}