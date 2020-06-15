#include <iostream>

using namespace std;

int main()
{

    int n, l = 0;
    bool isprime;
    cin >> n;

    int p[100];
    for (int i = 1; i <= n; i++)
    {
        // cout << "I is " << i << endl;
        for (int j = 2; j < i; j++)
        {
            // cout << "J is " << j << endl;
            if (i % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime == true)
        {
            p[l] = i;
            l++;
        }
        isprime = true;
    }
    cout << l - 1 << endl;

    // for (int i = l - 1; i > 0; i--)
    // {
    //     while (n != 0)
    //     {
    //         if (n - p[i])
    //         {
    //             n -= p[i];
    //             cout << p[i] << " ";
    //         }
    //         i--;
    //     }
    // }

    // for (int i = 0; i < l; i++)
    //     cout << p[i] << "\t";
    // return 0;
}
