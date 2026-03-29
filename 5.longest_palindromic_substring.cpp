#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

typedef long long ll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
#define v(x) vector<x>
#define pb push_back
#define trv(x, n) for(auto i = x; i < n; i++)
#define all(x) (x).begin(), (x).end()
#define st first
#define nd second

class Solution {
public:
    string longestPalindrome(string s) {
        ll n = s.size();
        vector<vector<bool>> ispalindrom(n, vector<bool>(n));
        pair<ll, ll> idx = {0, 0};
        for (size_t i = 0; i < n; i++)
        {
            ispalindrom[i][i] = true;
            idx = {i, i};
        }
        
        for (size_t i = 0; i < n; i++)
        {
            if (s[i] == s[i+1])
        }
        
    }
};

// Main Function
int main() {
    fastio;
    
    return 0;
}