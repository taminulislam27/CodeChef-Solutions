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
    int n; cin>>n; 
    vector<int>a(n), ans;
    for(int &x: a) cin>>x; 
    ans.push_back(0); 
    int cnt = 1; 
    for_i(1, n) 
    {
        if(cnt == a[i]) 
            ans.push_back(a[i]); 
        else
        {
            ans.push_back(cnt); 
            cnt++; 
        }
    }
    for(auto x: ans) 
        cout<<x<<" "; 
    nl; 
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