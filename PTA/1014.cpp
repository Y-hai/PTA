#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1, s2, s3, s4;
    char c1, c2 = '0';
    int index = 0;
    bool ok = false;
    cin >> s1 >> s2 >> s3 >> s4;
    int len1 = min(s1.length(), s2.length());
    int len2 = min(s3.length(), s4.length());

    for (int i = 0; i < len1; i++)
    {
        if (ok)
            if (s1[i] == s2[i] && ((s1[i] >= 'A' && s1[i] <= 'N') || (s1[i] >= '0' && s1[i] <= '9')))
            {
                c2 = s1[i];
                break;
            }

        if (!ok)
            if (s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G')
            {
                c1 = s1[i];
                ok = true;
            }
    }

    for (int i = 0; i < len2; i++)
    {
        if (s3[i] == s4[i] && ((s3[i] >= 'A' && s3[i] <= 'Z') || (s3[i] >= 'a' && s3[i] <= 'z')))
        {
            index = i;
            break;
        }
    }

    string str[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};

    cout << str[c1 - 'A'] << " ";

    if (c2 >= '0' && c2 <= '9')
        cout << '0' << c2 << ':';
    else
        cout << c2 - 'A' + 10 << ':';

    if (index < 10)
        cout << '0' << index;
    else
        cout << index;
    return 0;
}