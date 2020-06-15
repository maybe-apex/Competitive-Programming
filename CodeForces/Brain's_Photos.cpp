#include <iostream>

using namespace std;

int main()
{

    int n, m;
    bool color = false;
    cin >> n >> m;
    int t = n * m;
    while (t--)
    {
        char c;
        cin >> c;
        if (c != 'W' && c != 'B' && c != 'G')
            color = true;
    }
    color ? cout << "#Color" : cout << "#Black&White";

    return 0;
}