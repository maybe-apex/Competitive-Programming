#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << min(min(a, b), (a + b) / 3) << endl;
    }

    return 0;
}

// WHAT I WROTE //

// #include <iostream>

// using namespace std;

// int work(int a, int b)
// {
//     long long c = 0;
//     while (a > 1 || b > 1)
//     {
//         if (a >= b)
//         {
//             a -= 2;
//             b--;
//             c++;
//         }
//         else
//         {
//             b -= 2;
//             a--;
//             c++;
//         }
//     }
//     return c;
// }

// int main()
// {

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long a, b, c;
//         cin >> a >> b;
//         cout << (abs(a - b) >= min(a, b) ? min(a, b) : work(a, b));
//         cout << endl;
//     }

//     return 0;
// }