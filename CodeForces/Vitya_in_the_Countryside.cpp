#include <iostream>

using namespace std;

//Amazing code -

int main()
{

    int n, a, b;
    cin >> n;
    for (int i = 1; i < n; i++)
        cin >> a;
    cin >> b;

    cout << (b == 15 ? "DOWN" : (b == 0 ? "UP" : (n == 1 ? "-1" : (b > a ? "UP" : "DOWN"))));

    return 0;
}

// My Code

// int main()
// {

//     int n;
//     cin >> n;
//     int a[n + 1];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     if (a[n - 1] == 15)
//         return cout << "DOWN", 0;
//     if (a[n - 1] == 0)
//         return cout << "UP", 0;
//     if (n > 1)
//         cout << (a[n - 2] > a[n - 1] ? "DOWN" : "UP");
//     else
//         cout << -1;
//     return 0;
// }