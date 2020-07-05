#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double x, y;
    cin >> x >> y;
    x = y * log(x) - x * log(y);
    cout << (x > 0 ? ">" : (x < 0 ? "<" : "="));
    return 0;
}