#include <iostream>
#include <string>
#include <cstring>
using namespace std;

const int N = 128;
int a[N];

int main()
{
    string s;
    getline(cin, s);
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        s[i] = tolower(s[i]);
        a[int(s[i])]++;
    }
    int cnt = 0;
    char c;
    for (int i = 0; i < 128; i++)
        if (char(i) >= 'a' && char(i) <= 'z' && a[i] >= cnt)
            if (a[i] > cnt || (a[i] == cnt && char(i) < c))
            {
                cnt = a[i];
                c = char(i);
            }
    cout << c << " " << cnt << endl;
    return 0;
}