#include <iostream>

using namespace std;

int main()
{
    int x, s = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        s += x;
    }
    cout << (s % 5 || s ? s / 5 : -1);
}

// if (s % 5 == 0 || s == 0)