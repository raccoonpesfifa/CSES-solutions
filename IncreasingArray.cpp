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
    You are given an array of n integers. You want to modify the array so that it is increasing,
    i.e., every element is at least as large as the previous element.
    On each move, you may increase the value of any element by one. 
    What is the minimum number of moves required?
Approach
    1. for loop and store minimum increment needed when comparing arr[i] with arr[i-1] and reassign arr[i] to new value after incrementing
Test case:
Input:    
    5
    3 2 5 1 7
Output:
    5
*/

    
int main(){
    // freopen ("input.inp", "r", stdin);
    // freopen ("output.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll int n; cin >> n;
    vt<ll int> arr(n);
    ll int res = 0;
    ll int ad = 0;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++){
        if (arr[i] < arr[i-1]){
            res += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout << res << endl;
    return 0;
}   
