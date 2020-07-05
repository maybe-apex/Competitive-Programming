#include <iostream>

using namespace std;

int main()
{
    int n, k, i = 0;
    cin >> n >> k;
    while (k--)
        cout << n-- << " ";
    for (int j = 0; j < n; j++)
        cout << ++i << " ";

    return 0;
}