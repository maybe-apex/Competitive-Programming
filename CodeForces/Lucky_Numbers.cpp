#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    long long n, i = 1, x = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        x += pow(2, i);
    cout << x;

    return 0;
}