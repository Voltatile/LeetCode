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
    bool isValid(string s) {
        stack<char> stk;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                stk.push(s[i]);
            }
            else {
                if (stk.empty()) {
                    return false; 
                }
                
                char top = stk.top();
                if ((s[i] == '}' && top == '{') || 
                    (s[i] == ']' && top == '[') || 
                    (s[i] == ')' && top == '(')) {
                    
                    stk.pop();
                } 
                else {
                    return false;
                }
            }
        }
        return stk.empty();
    }
};

// Main Function
int main() {
    fastio;
    
    return 0;
}