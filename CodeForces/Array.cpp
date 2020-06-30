#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> pos, neg, zero;
int main()
{

    int n;
    for (cin >> n; n; n--)
    {
        int x;
        cin >> x;
        if (x == 0)
            zero.push_back(x);
        if (x > 0)
            pos.push_back(x);
        if (x < 0)
            neg.push_back(x);
    }

    if (pos.size() == 0)
    {
        for (int i = 0; i < 2; i++)
            pos.push_back(neg.back()), neg.pop_back();
    }
    if (neg.size() % 2 == 0)
    {
        zero.push_back(neg.back());
        neg.pop_back();
    }

    cout << neg.size() << " ";
    for (auto a : neg)
        cout << a << " ";
    cout << endl;
    cout << pos.size() << " ";
    for (auto a : pos)
        cout << a << " ";
    cout << endl;
    cout << zero.size() << " ";
    for (auto a : zero)
        cout << a << " ";

    return 0;
}