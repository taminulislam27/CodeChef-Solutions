/*
        /\_/\.
       (= ._.)
       / >  \>
._____________________..
|                      |
|   Md_Taminul_Islam   |
|   CSE @ BU           |
|______________________|
*/
#include<bits/stdc++.h>

using namespace std;
#define faster()\
ios::sync_with_stdio(false);\
cin.tie(nullptr)
#define all(v)(v).begin(), (v).end()
#define rall(v)(v).rbegin(), (v).rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define ll long long
void tamin()
{
    int n;
    cin >> n;
    vector < int > a;
    set < int > s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (s.count(x)) a.push_back(x), s.erase(x);
        else s.insert(x);
    }
    if (n < 4)
    {
        cout << -1 << endl;
        return;
    }
    sort(all(a));
    if (a.size() < 2)
    {
        cout << -1 << endl;
        return;
    }
    int last = a[a.size() - 1];
    int secondlast = a[a.size() - 2];
    cout << last * secondlast << endl;
}
int main()
{
    faster();
    int t = 1;
    cin >> t;
    while (t--)
        tamin();

    return 0;
}