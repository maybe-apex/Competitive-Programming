#include <iostream>

using namespace std;

int main()
{

    char r, s, a, b;
    bool swap = false;
    cin >> r >> s;

    for (int i = 0; i < 5; i++)
    {
        cin >> a >> b;
        // cout << "Comparing " << a << " " << b << endl;
        if (a == ' ' || b == ' ')
            i--;
        if (a == r || b == s)
        {
            swap = true;
        }
    }
    swap ? cout << "YES" : cout << "NO";

    return 0;
}