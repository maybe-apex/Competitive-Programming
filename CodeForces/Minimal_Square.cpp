#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int small = min(a, b);
        int big = max(a, b);
        int side;
        2 *small >= big ? side = 2 *small : side = big;
        cout << side * side << endl;
    }

    return 0;
}