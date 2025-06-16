#include <bits/stdc++.h>
using namespace std;

#define ar array
#define vt vector
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

mt19937 rd(chrono::steady_clock::now().time_since_epoch().count());

#define fi first
#define se second
#define pb push_back

#define Bit(_mask, i) (((long long)_mask >> ((int)i)) & 1ll)
#define dBit(x) __builtin_popcountll((long long)x)
#define FOR(i, Left, Right) for (int _ = Left, __ = Right, i = _; i <= __; i++)
#define FORD(i, Right, Left) for (int _ = Right, __ = Left, i = _; i >= __; i--)
#define FIX(_value, n) cout << setprecision((int)n) << fixed << _value << "\n";

/*
Statement:
    A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral
    Your task is to find out the number in row y and column x.
Approach
    1. we only work with boundary col/row set given the inner can be calculated easily. Example:
        (2,3) can be calculated by using (2,2) inner which is 4, and we derive the solution based on odd/even index of rows and columns
Test case:
Input:
    3
    2 3
    1 1
    4 2
Output:
    8
    1
    15
*/

int main()
{
    // freopen ("input.inp", "r", stdin);
    // freopen ("output.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long t; cin >> t;
    while (t--){
        long long x, y;
        cin >> x >> y;

        long long maxx = max(x,y);
        long long inner = (maxx-1)*(maxx-1);

        if (maxx % 2 == 0){
            if (y > x){
                cout << inner + x;
            } else {
                cout << inner + maxx + (maxx - y);
            }
        }
        else {
            if (y > x){
                cout << inner + maxx + (maxx - x);
            } else {
                cout << inner + y;
            }
        }
        cout << endl;
    }
    return 0;
}
