#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int sum = min(a, min(d, c)) * 256;

    a -= sum / 256;
    sum += min(a, b) * 32;
    cout << sum;

    return 0;
}