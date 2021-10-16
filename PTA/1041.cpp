#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <cstring>
using namespace std;

map<int, string> m;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;
        string sb;
        stringstream ss;
        ss << b;
        ss >> sb;
        string value = s + sb;
        m[a] = value;
    }
    int cnt;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        int key;
        cin >> key;
        if (i)
            cout << endl;
        cout << m[key];
    }
    return 0;
}