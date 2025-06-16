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
    You are given an array of n integers. You want to modify the array so that it is increasing,
    i.e., every element is at least as large as the previous element.
    On each move, you may increase the value of any element by one.
    What is the minimum number of moves required?
Approach
    1. split into odd series and even series when n > 3 (even/odd number different by 2 (2,4,1,3))
Test case:
Input:
    4
Output:
    2 4 1 3
*/

int main()
{
    // freopen ("input.inp", "r", stdin);
    // freopen ("output.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    if (n == 1){
        cout << n << endl;
    }
    else if (n <= 3)
    {
        cout << " NO SOLUTION" << endl;
    }int value = 2;
    while (n > value){
        cout << value << " ";
        value += 2;
    }
    int value = 3;
    while (n > value){
        cout << value << " ";
        value += 2;
    }
    else
    {
        int value = 2;
        while (n >= value)
        {
            cout << value << " ";
            value += 2;
        }
        value = 1;
        while (n >= value)
        {
            cout << value << " ";
            value += 2;
        }
    }
    return 0;
}
