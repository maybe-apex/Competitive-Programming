#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n, a[1000], rem = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int t = a[i], digit;
        for (int i = 0; t != 0; i++)
        {
            t = t / 10;
            digit++;
        }
        // cout << "first \t";
        //  << "digit = " << digit;
        for (int j = 1; j <= pow(10, digit); j *= 10)
        {
            // cout << "second \n";
            if (a[i] % j > j / 10)
            {
                cout << a[i] % j - rem << " ";
            }
            rem = a[i] % j;
        }
        cout << endl;
        digit = 0;
    }

    return 0;
}