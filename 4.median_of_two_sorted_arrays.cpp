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
    ll idx = 0, jdx = 0;

    ll mins(vector<int>& a, vector<int>& b) {
        if (idx < a.size() && jdx < b.size()) return (a[idx] < b[jdx]) ? a[idx++] : b[jdx++];
        if (idx < a.size()) return a[idx++];
        if (jdx < b.size()) return b[jdx++];
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        ll tot = nums1.size() + nums2.size();
        for (size_t i = 0; i < tot / 2; i++)
        {
            mins(nums1, nums2);
        }
        if (tot % 2 == 0) {
            return (double)(mins(nums1, nums2) + mins(nums1, nums2)) / 2;
        }
        else {
            return mins(nums1, nums2);
        }
    }
};

// Main Function
int main() {
    fastio;
    
    return 0;
}