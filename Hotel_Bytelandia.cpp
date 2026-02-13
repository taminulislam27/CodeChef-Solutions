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
#define for_i(i, a, b) for(int i = a; i < b; i++)
#define for_n(i, a, b) for(int i = a; i >= b; i--)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define ll long long
void tamin()
{
    int n; cin>>n; 
    vector<int>a(n), d(n); 
    for_i(i, 0, n) cin>>a[i]; 
    for_i(i, 0, n) cin>>d[i]; 
    vector<int>stay(1001, 0); 
    for_i(i, 0, n) 
    {
        for_i(j, a[i], d[i]) stay[j]++; 
    } 
    sort(rall(stay)); 
    cout<<stay[0]<<endl; 
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