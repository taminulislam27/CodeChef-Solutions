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
    ll B, G, X, Y, N;
    cin >> B >> G >> X >> Y >> N;
    if (X + Y > N)
    {
        cout << -1 << '\n';
        return;
    }
    ll mnRooms = (B + G + N - 1) / N; // Ceil
    ll mxRoomsBoys = B / X, mxRoomsGirls = G / Y;
    ll maxRooms = min(mxRoomsBoys, mxRoomsGirls);
    if (mnRooms <= maxRooms)
        cout << mnRooms << '\n';
    else
        cout << -1 << '\n';
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