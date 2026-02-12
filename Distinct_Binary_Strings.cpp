/*
        /\_/\.
       (= ._.)
       / >  \>
._____________________..
|                      |
|   Md_Taminul_Islam   |
|   CSE @ BU           |
|______________________|
*/#include<bits/stdc++.h>
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
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
        if (s[i] != s[i + 1]) cnt++;
    cout << cnt + 1 << endl;
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