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
    int myAtoi(string s) {
        bool minus = false;
        ll ans = 0;
        if (s[0] == '-') minus = true;
        else return 0;
        ll kali = 1;
        for (size_t i = 1; i < s.length(); i++)
        {
            if ((int)s[i] >= 48 && (int)s[i] <= 57 ) {
                ans = ans * kali + ((int)s[i] - 48);
                kali++;
            }
            else break;
        }
        return ans;
    }
};

int main(){
    char x = ' ';
    cout << (int)x;
}