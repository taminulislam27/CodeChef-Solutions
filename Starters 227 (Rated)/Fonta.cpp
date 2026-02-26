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
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define nl cout << "\n"
#define ll long long
void tamin()
{
    string s; cin>>s; 
    string a = ""; 
    int n = s.size(); 
    a += s[n-3]; 
    a += s[n-2]; 
    a += s[n-1]; 
    a == "nta"? yes: no; 
}
int main()
{
    faster();
    int t = 1;
    // cin >> t;
    while (t--)
        tamin();

    return 0;
}