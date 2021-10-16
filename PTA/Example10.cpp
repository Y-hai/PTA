#include <iostream>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

set<int> s;
map<int, string> m;
typedef pair<string, int> PSI;
PSI psi[10];

int main()
{
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // cout << s.count(1) << endl;
    // s.erase(1);
    // cout << s.count(1) << endl;
    // for (int a : s)
    //     cout << a << endl;
    // m.insert(make_pair("a", 1));
    // m["b"] = 2;
    // m.insert(pair<string, int>("c", 3));
    // cout << m.size() << endl;
    // m.erase("b");
    // cout << m.size() << endl;
    // cout << m.count("d") << endl;
    // for (auto a : m)
    //     cout << a.first << endl;
    // psi[0] = {"a", 1};
    // cout << psi[0].first << " " << psi[0].second << endl;
    // string s = "abcdefKKKK";
    // cout << s.replace(1, 2, "hhh") << endl; // 2代表长度
    // m[1] = "aaa";
    // cout << m[1];
    // int a = round(3.5);
    // printf("%5.3f", 3.150);
    string s = "123456789";
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}