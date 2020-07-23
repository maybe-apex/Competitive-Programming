#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            return cout << "HARD", 0;
    }

    return cout << "EASY", 0;
}