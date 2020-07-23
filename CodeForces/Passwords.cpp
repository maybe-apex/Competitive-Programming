#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[105] = {0};
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        a[s.size()]++;
    }
    cin >> s;
    int b = s.size();
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum += a[i];
    }
    cout << sum + sum / k * 5 + 1 << " " << sum + a[b] + (sum + a[b] - 1) / k * 5;

    return 0;
}
