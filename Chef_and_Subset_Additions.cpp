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
#define faster()                 \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define forr for(int i = 0; i<n; i++)
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define nl cout << "\n"
#define ll long long
void tamin()
{
    int n, x, y; 
    cin>>n>>x>>y; 
    vector<int>a(n), b(n); 
    bool ok = true; 
    forr cin>>a[i]; 
    forr 
    {
        cin>>b[i];
        if(a[i] + x != b[i] && a[i] + y != b[i]) 
            ok = false; 
    } 
    ok? yes: no; 
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