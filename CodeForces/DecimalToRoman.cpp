#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int num[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string rom[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int div = 0, j = 12;
    while (n)
    {
        div = n / num[j];
        while (div--)
        {
            cout << rom[j];
        }
        n = n % num[j--];
    }

    return 0;
}