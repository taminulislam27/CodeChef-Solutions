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
    string a, b; 
    cin>>a>>b; 
    string x = a+b; 
    int n; cin>>n; 
    string y = "", c; 
    while (n--)
    {
        cin>>c; 
        y += c; 
    }
    set<int>st; 
    vector<int>cntx(26, 0), cnty(26, 0); 
    for(auto ch: x) 
        st.insert(ch), cntx[ch - 'a']++; 
    for(auto ch: y)
    {
        if(!st.count(ch)) 
        {
            no; return; 
        }
        cnty[ch - 'a']++; 
    }
    for(int i = 0; i<26; i++)
    {
        if(cntx[i] < cnty[i])
        {
            no; return; 
        }
    }
    yes; 
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