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
private:
    int bins(vector<int>& nums, int x) {

    }

public:
    int search(vector<int>& nums, int target) {
        ll n = nums.size();

        ll l = ((nums[n / 2] >= target) ? 0 : n/2 + 1);
        ll r = ((nums[n / 2] >= target) ? n/2 : n - 1);

        // while (l <= r) {
        //     ll m = (l + r) / 2;
        //     if (nums[m] == target) return m;


        // }
        cout << l << " " << r << endl;
    }
};

// Main Function
int main() {
    fastio;
    
    return 0;
}