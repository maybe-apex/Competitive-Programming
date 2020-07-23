#include <iostream>

using namespace std;

int main()
{
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    cout << (n > (d / t + 1) * k ? "YES" : "NO");
    return 0;
}
n