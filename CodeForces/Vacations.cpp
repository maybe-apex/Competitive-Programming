#include <iostream>

using namespace std;

int main()
{
    int n, rest = 0, p = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            rest++, p = 0;
        }
        if (x == 1)
        {
            if (p == 1)
                rest++, p = 0;
            else
                p = 1;
        }
        else if (x == 2)
        {
            if (p == 2)
                rest++, p = 0;
            else
                p = 2;
        }
        else if (x == 3)
        {
            if (p == 1)
                p = 2;
            else if (p == 2)
                p = 1;
        }
    }
    cout << rest;
    return 0;
}