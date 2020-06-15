#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a;
        cin >> a;
        // if ((float)floor(360 / (180 - a)) == (float)360 / (180 - a))
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;

        puts(360 % (180 - a) ? "NO" : "YES");
    }

    return 0;
}