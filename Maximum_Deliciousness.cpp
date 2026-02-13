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
#define for_i(a, b) for(int i = a; i < b; i++)
#define for_n(a, b) for(int i = a; i >= b; i--)
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define ll long long
void tamin()
{
    ll n, k, l; 
    cin>>n>>k>>l; 
    vector<ll>a(n); 
    for_i(0, n) cin>>a[i]; 
    sort(rall(a)); 
    ll tk = 1; 
    ll taste = 0;
    for_i(0, n) 
    {
        if(tk == l) 
        {
            taste += a[i]; 
        }
        tk++;
        if(tk > k) tk = 1; 
    }
    cout<<taste<<endl; 
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