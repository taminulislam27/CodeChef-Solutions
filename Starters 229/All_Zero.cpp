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
    int a, b, c; 
    cin>>a>>b>>c;
    if(a>b)
    {
        a -= (b/2); 
        b %= 2;
        c -= (3*b);  
        b = 0; 
    }
    else
    {
        b -= (2*a); 
        a = 0; 
        c -= (3*b); 
        b = 0; 
    }
    (a == b && b == c && c == 0)? yes: no; 
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