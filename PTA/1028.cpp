#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool check(string s)
{
    int year = (s[0] - '0') * 1000 + (s[1] - '0') * 100 + (s[2] - '0') * 10 + s[3] - '0';
    int moon = (s[5] - '0') * 10 + s[6] - '0';
    int day = (s[8] - '0') * 10 + s[9] - '0';
    if (year < 1814 || year > 2014)
        return false;
    if (year == 1814)
    {
        if (moon < 9)
            return false;
        if (moon == 9)
            if (day < 6)
                return false;
    }
    if (year == 2014)
    {
        if (moon > 9)
            return false;
        if (moon == 9)
            if (day > 6)
                return false;
    }
    return true;
}

bool f(string s1, string s2)
{
    int year1 = (s1[0] - '0') * 1000 + (s1[1] - '0') * 100 + (s1[2] - '0') * 10 + s1[3] - '0';
    int moon1 = (s1[5] - '0') * 10 + s1[6] - '0';
    int day1 = (s1[8] - '0') * 10 + s1[9] - '0';
    int year2 = (s2[0] - '0') * 1000 + (s2[1] - '0') * 100 + (s2[2] - '0') * 10 + s2[3] - '0';
    int moon2 = (s2[5] - '0') * 10 + s2[6] - '0';
    int day2 = (s2[8] - '0') * 10 + s2[9] - '0';
    if (year1 < year2)
        return true;
    if (year1 == year2)
    {
        if (moon1 < moon2)
            return true;
        if (moon1 == moon2)
            if (day1 < day2)
                return true;
    }
    return false;
}

int main()
{
    int n, cnt;
    cin >> n;
    cnt = n;
    string maxname, maxyear = "2024/10/10", minname, minyear = "1700/10/10";
    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (check(s2))
        {
            if (f(s2, maxyear))
            {
                maxyear = s2;
                maxname = s1;
            }
            if (f(minyear, s2))
            {
                minyear = s2;
                minname = s1;
            }
        }
        else
            cnt--;
    }
    if (cnt == 0)
        cout << cnt;
    else
        cout << cnt << " " << maxname << " " << minname;
    return 0;
}