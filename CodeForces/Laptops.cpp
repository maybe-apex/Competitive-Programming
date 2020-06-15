#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    bool good = true;
    int x, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x != y)
            good = false;
    }
    cout << (good ? "Poor Alex" : "Happy Alex");
}