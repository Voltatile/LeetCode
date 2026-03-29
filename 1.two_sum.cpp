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
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;
        
        for (int i = 0; i < nums.size(); i++) {
            int sisa = target - nums[i];
            
            if (mp.find(sisa) != mp.end()) {
                return {mp[sisa], i};
            }
            
            mp[nums[i]] = i;
        }
        
        return {};
    }
};