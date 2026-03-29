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
    int lengthOfLongestSubstring(string s) {
        vector<ll> last_idx(30, -1);
        ll ans = 0, left = 0;
        for (size_t r = 0; r < s.size(); r++)
        {
            if (last_idx[s[r]] >= left) left = last_idx[s[r]] + 1;
            last_idx[s[r]] = r;
            ans = max(ans, r - left + 1);
        }
        return ans;
    }
};

// Main Function
int main() {
    fastio;

    return 0;
}