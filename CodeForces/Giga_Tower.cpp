#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool found = false;
    int n = s[s.size() - 1], x = 0;
    long long k = stoi(s);
    while (!found)
    {
        k++;
        s = to_string(k);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '8')
            {
                found = 1;
                break;
            }
        }
        x++;
    }
    cout << x;
    return 0;
}