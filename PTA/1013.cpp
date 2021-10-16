#include <iostream>
using namespace std;

const int N = 1e4 + 10;
int primes[N], cnt = 0;
bool st[N];

// 线性筛求质数，效率比埃氏筛高，但会额外占用空间
void get_primes(int x)
{
    for (int i = 2; i <= x; i++)
    {
        if (!st[i])
            primes[cnt++] = i;
        for (int j = 0; primes[j] <= x / i; j++)
        {
            st[primes[j] * i] = true;
            if (i % primes[j] == 0)
                break;
        }
    }
}

int main()
{
    int l, r;
    cin >> l >> r;
    get_primes(N - 5);
    cnt = 1;
    for (int i = l - 1; i < r; i++, cnt++)
    {
        if (cnt == r - l + 1)
            cout << primes[i];
        else if (cnt % 10)
            cout << primes[i] << " ";
        else
            cout << primes[i] << endl;
    }
    return 0;
}