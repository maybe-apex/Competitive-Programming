#include <iostream>

using namespace std;

int main()
{

    int n, a[100000], sum = 0, untreated = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && sum + a[i] >= 0)
            sum += a[i];
        else if (a[i] > 0)
            sum += a[i];
        else if (a[i] < 0 && sum + a[i] < 0)
            sum = 0, untreated += -a[i] - sum;
    }
    cout << untreated;

    return 0;
}