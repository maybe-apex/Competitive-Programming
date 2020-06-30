#include <iostream>
#include <algorithm>
using namespace std;

bool compare(string &s1, string &s2)
{
    return s1.size() < s2.size();
}

int main()
{
    int n;
    cin >> n;
    string s[n + 1];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    sort(s, s + n, compare);
    for (int i = 1; i < n; i++)
    {
        if (s[i].find(s[i - 1]) > 100)
            return cout << "NO", 0;
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
        cout << s[i] << endl;

    return 0;
}