#include <iostream>
#include <cmath>

using namespace std;

int x, y;

bool isuseable(double a)
{
    for (double i = 5; i < a; i++)
        if (ceil(a / i) == a / i && a / i >= 5)
        {
            x = a / i, y = i;
            return true;
        }
    return false;
}

int main()
{
    double n;
    char vow[5] = {'a', 'e', 'i', 'o', 'u'};
    cin >> n;
    if (!isuseable(n))
        return cout << "-1", 0;
    else
        for (int i = 0; i < x; i++)
            for (int j = 0; j < y; j++)
                cout << vow[(i + j) % 5];

    return 0;
}