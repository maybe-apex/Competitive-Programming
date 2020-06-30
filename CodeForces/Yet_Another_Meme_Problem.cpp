#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        string c;
        cin >> a >> b;
        b++, c = to_string(b);
        cout << a * (c.size() - 1) << endl;
    }
    return 0;
}

// bool conc(int a, int b)
// {
//     string s = to_string(a) + to_string(b);
//     // cout << "Checking " << a << " " << b << endl;
//     if (a + b + a * b == stoi(s))
//         return true;
//     return false;
// }
// int main()
// {

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, count = 0;
//         cin >> a >> b;
//         for (int i = 1; i <= a; i++)
//         {
//             for (int j = 1; j <= b; j++)
//             {
//                 if (conc(i, j))
//                     count++;
//             }
//         }
//         cout << count;
//     }

//     return 0;
// }