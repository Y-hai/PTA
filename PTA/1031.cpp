#include <iostream>
#include <string>
#include <cstring>
#include <map>
using namespace std;

map<int, char> m;

int main()
{
    int w[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
    m[0] = '1', m[1] = '0', m[2] = 'X', m[3] = '9', m[4] = '8', m[5] = '7';
    m[6] = '6', m[7] = '5', m[8] = '4', m[9] = '3', m[10] = '2';
    int n, cnt = 0;
    cin >> n;
    bool enter = false;
    while (n--)
    {
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < 17; i++)
            sum += (s[i] - '0') * w[i];

        if (s[17] != m[sum % 11])
        {
            if (enter)
                cout << endl;
            cout << s;
            cnt++;
            enter = true;
        }
    }
    if (cnt == 0)
        cout << "All passed";
    return 0;
}