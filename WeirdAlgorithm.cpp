#include<bits/stdc++.h>
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

#define Bit(_mask, i) (((long long)_mask>>((int)i))&1ll)
#define dBit(x) __builtin_popcountll((long long)x)
#define FOR(i, Left, Right) for (int _ = Left, __ = Right, i = _; i <= __; i++)
#define FORD(i, Right, Left) for (int _ = Right, __ = Left, i = _; i >= __; i--)
#define FIX(_value, n) cout << setprecision((int)n) << fixed << _value << "\n";

/*
Statement:
    Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
Approach
    1. Do simulation with for loop until result is 1
Test case:
    3
    3 10 5 16 8 4 2 1
*/

    
int main(){
    // freopen ("input.inp", "r", stdin);
    // freopen ("output.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n; cin >> n;
    cout << n << " ";
    while(n != 1){
        if ((n & 1) == 0){
            n /= 2;
        } else {
            n = n*3 + 1;
        }
        cout << n << " ";
    }
    return 0;
}   
