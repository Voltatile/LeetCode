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
    int romanToInt(string s) {
        int total = 0;
        int prev = 0;
        
        for (int i = s.length() - 1; i >= 0; i--) {
            int curr = getValue(s[i]);
            
            if (curr < prev) {
                total -= curr;
            } 
            else {
                total += curr;
            }
            
            prev = curr;
        }
        
        return total;
    }

private:
    int getValue(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};

// Main Function
int main() {
    fastio;
    
    return 0;
}