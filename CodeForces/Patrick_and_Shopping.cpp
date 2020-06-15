#include <iostream>

using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    cout << min(2 * (a + b), min(min(2 * a, 2 * b) + 2 * c, a + b + c));
    return 0;
}