#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int c[3];
        cin >> c[0] >> c[1] >> c[2];
        sort(c, c + 3);
        cout << c[1] + min((c[0] - c[1]), c[2]) << endl;
        // cout << min(c[2], c[0] + c[1]) << endl;
    }

    return 0;
}