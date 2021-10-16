#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    char arr[10010], zhishu[10010];
    arr[0] = s[1];
    int index, l1, l2;

    for (int i = 3; i < len; i++)
    {
        if (s[i] != 'E')
            arr[i - 2] = s[i];
        else
        {
            l1 = i - 2;
            index = i;
            break;
        }
    }

    for (int i = index + 2; i < len; i++)
        zhishu[i - index - 2] = s[i];
    l2 = len - index - 2;
    int num = 0;
    for (int i = 0; i < l2; i++)
    {
        int test = zhishu[i] - '0';
        num = num * 10 + test;
    }
    if (s[index + 1] == '+')
    {
        if (s[0] == '-')
            cout << s[0];
        int i1 = 1;
        cout << arr[0];
        for (int i = 0; i < num; i++)
        {
            if (i1 < l1)
                cout << arr[i1++];
            else
                cout << '0';
        }
        int r = l1 - i1;
        if (r)
            cout << '.';
        while (r)
        {
            cout << arr[i1++];
            r--;
        }
    }
    else
    {
        if (s[0] == '-')
            cout << s[0];
        if (num == 0)
        {
            cout << arr[0] << '.';
            for (int i = 1; i < l1; i++)
                cout << arr[i];
        }
        else
        {
            cout << "0.";
            num--;
            while (num--)
                cout << '0';
            for (int i = 0; i < l1; i++)
                cout << arr[i];
        }
    }
    return 0;
}