#include <iostream>
#include <vector>
using namespace std;

int a[100005];
int main()
{
    int n;
    cin >> n;
    int k = n;
    while (k--)
    {
        int x;
        cin >> x;
        a[x] = 1;
        while (a[n])
            cout << n-- << " ";
        cout << endl;
    }
    return 0;
}