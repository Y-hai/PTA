#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0, f = true;
    while (cin >> a >> b)
    {
        if (b > 0)
        {
            if (f)
            {
                cout << a * b << " " << b - 1;
                f = !f;
            }
            else
                cout << " " << a * b << " " << b - 1;
        }
        else if (f)
            cout << 0 << " " << 0;
    }
    return 0;
}
