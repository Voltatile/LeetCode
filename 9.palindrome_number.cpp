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
    bool isPalindrome(int x) {
        string str = to_string(x);
        for (size_t i = 0; i < str.size() / 2; i++)
        {
            if (str[i] != str[str.size()-i-1]) {
                return false;
            }
        }
        return true;
    }
};