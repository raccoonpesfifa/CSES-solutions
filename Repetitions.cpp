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
    You are given a DNA sequence: a string consisting of characters A, C, G, and T. 
    Your task is to find the longest repetition in the sequence. 
    This is a maximum-length substring containing only one type of character.
Approach
    1. for loop and store largest sequence when comparing s[i] with s[i-1]
Test case:
Input:    
    ATTCGGGA
Output:
    3
*/

    
int main(){
    // freopen ("input.inp", "r", stdin);
    // freopen ("output.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s; cin >> s;
    int res = 1, count = 1;

    for (int i = 1; i < s.length(); i ++){
        if (s[i] == s[i-1]){
            count += 1;
        }
        else {
            count = 1;
        }
        res = max(res, count);
    }

    cout << res << endl;
}   
