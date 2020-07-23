#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, key[1000] = {0}, count = 0, x = 1;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (x)
            key[s[i]]++;
        if (!x)
        {
            if (key[tolower(s[i])] <= 0)
                count++;
            else
                key[tolower(s[i])]--;
        }
        x = 1 - x;
    }
    cout << count;
    return 0;
}