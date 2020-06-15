#include <bits/stdc++.h>

using namespace std;

int main(){

    char c;
    set<char>S;

    while(c!='}')
    {
        cin >> c;
        if (isalpha(c))
        S.insert(c);
    }

    cout << S.size();

    return 0;
}
