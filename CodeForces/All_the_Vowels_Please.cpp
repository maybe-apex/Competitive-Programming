#include <iostream>
#include <cmath>

using namespace std;

bool isprime(int a)
{
    if (a == 1 || a == 2)
        return true;
    for (int i = 2; i <= sqrt(a); i++)
        if (a % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    char vow[5] = {'a', 'e', 'i', 'o', 'u'};
    cin >> n;
    if (isprime(n) || n <= 25)
        return cout << "-1", 0;
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << vow[i % 5];
        }
    }

    return 0;
}