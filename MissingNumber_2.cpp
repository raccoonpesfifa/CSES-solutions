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
    You are given all numbers between 1,2,\ldots,n except one. 
    Your task is to find the missing number.
Approach
    1. sum up from 1 to n, substract the sum of input -> substract
        sum range: n(n+1)/2
        sum input: for loop sum
    2. use xor property (n^0 = n, n^n = 0), xor the good series, then xor with the input series, then xor both:   
        Example: (1^2^3)^(1^2) = (1^1)^(2^2)^3 = 0^0^3 = 3
Test case:
    5
    2 3 1 5
*/

    
int main(){
    // freopen ("input.inp", "r", stdin);
    // freopen ("output.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll n, res; cin >> n;
    vt<ll> arr(n);
    ll xx = 0, x = 0;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        x ^= arr[i];
    }

    for(int i = 0; i <= n; i++){
        xx^=i;
    }

    res = x^xx;

    cout << res << endl;
    return 0;
}   
