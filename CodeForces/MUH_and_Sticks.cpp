#include <iostream>
using namespace std;

// God level code //
int a, i, s[10], q[2], e, f;
int main()
{
    while (cin >> a)
        if (++s[a] == 4)
            f = 1, s[a] = 0;
    for (; i < 10; i++)
        if (s[i])
            q[++e] = s[i];
    cout << ((!f) ? "Alien" : (q[0] == q[1] ? "Elephant" : "Bear"));
    return 0;
}

// smol brain code //

// int main()
// {
//     int a[6];
//     bool legs = false;
//     for (int i = 0; i < 6; i++)
//         cin >> a[i];
//     int count = 0;
//     sort(a, a + 6);
//     for (int i = 0; i < 3; i++)
//     {
//         if (a[i] == a[i + 1] && a[i] == a[i + 2] && a[i] == a[i + 3])
//         {
//             legs = true;
//             a[i] = 0;
//             a[i + 1] = 0;
//             a[i + 2] = 0;
//             a[i + 3] = 0;
//         }
//         if (legs)
//             break;
//     }
//     sort(a, a + 6);
//     if (!legs)
//         return cout << "Alien", 0;
//     else
//         cout << (a[5] == a[4] ? "Elephant" : "Bear");
//     return 0;
// }