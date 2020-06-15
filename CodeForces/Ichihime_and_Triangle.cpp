#include <iostream>

using namespace std;

int main()
{

    int n;
    bool done = false;
    cin >> n;

    while (n--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        // for (long long x = b; x >= a; x--)
        // {
        //     for (long long y = c; y >= b; y--)
        //     {
        //         for (long long z = d; z >= c; z--)
        //         {
        //             if (x + y > z && y + z > x && z + x > y && done == false)
        //             {
        //                 cout << x << " " << y << " " << z << endl;
        //                 done = true;
        //             }
        //             break;
        //         }
        //         break;
        //     }
        //     break;
        // }
        // done = false;
        cout << b << " " << c << " " << c << endl;
    }

    return 0;
}