#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        float a, b;
        cin >> a >> b;
        float c = a / 100, d = b / 225;
        if (c == d)
            cout << "Equal" << endl;
        else if (c < d)
            cout << "Small" << endl;
        else
            cout << "Large" << endl;
    }
}
