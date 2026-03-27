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
    int n, k; 
    cin>>n>>k; 
    vector<int>a(n); 
    for_i(0, n) cin>>a[i]; 
    sort(rall(a));
    int sm = 0; 
    for_i(0, n){
        if(k>0 && a[i]>5){
            sm += (a[i]-5); 
            k--; 
        }
        else if(a[i]>10){
            sm += (a[i]-10); 
        }
    }
    cout<<sm<<endl; 
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