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
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl cout << "\n"
#define ll long long
void tamin()
{
    int n; cin>>n; 
    vector<int>a(n);
    for(int i = 0; i<n; i++) cin>>a[i]; 
    int local = 0, global = 0; 
    for(int i = 0; i<n-1; i++)
    {
        if(a[i]>a[i+1]) local++; 
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i]>a[j]) global++; 
        }        
    }
    global == local? yes: no; 
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