#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> div(vector<int> &A, int b, int &r)
{
    vector<int> C;
    for (int i = 0; i < A.size(); i++)
    {
        r = r * 10 + A[i];
        C.push_back(r / b);
        r %= b;
    }
    reverse(C.begin(), C.end());
    while (C.size() > 1 && C.back() == 0)
        C.pop_back();
    return C;
}

int main()
{
    string a;
    int b;
    cin >> a >> b;
    vector<int> A, C;
    for (int i = 0; i < a.size(); i++)
        A.push_back(a[i] - '0');

    int r = 0;
    C = div(A, b, r);

    for (int i = C.size() - 1; i >= 0; i--)
        printf("%d", C[i]);

    cout << " " << r;
    return 0;
}
