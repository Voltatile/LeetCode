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
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) {
            return "";
        }
        sort(strs.begin(), strs.end());
        string first = strs.front();
        string last = strs.back();

        long long i = 0;
        while (i < first.length() && i < last.length() && first[i] == last[i]) {
            i++;
        }
        return first.substr(0, i);
    }
};

// Main Function
int main() {
    Solution ob;

    vector<string> kata = {"flower", "flow", "flight"};

    string hasil = ob.longestCommonPrefix(kata);

    cout << "\n\nHasil return: " << hasil << endl;

    return 0;
}