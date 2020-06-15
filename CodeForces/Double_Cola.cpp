#include <iostream>

using namespace std;

int main()
{

    int n;
    string a[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cin >> n;
    while (n > 5)
        n = n / 2 - 2;
    cout << a[n - 1];

    return 0;
}