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


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0); 
        ListNode* curr = &dummy;
        
        int carry = 0; 
        
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;
            
            int sum = val1 + val2 + carry;
            
            carry = sum / 10;
            
            curr->next = new ListNode(sum % 10);
            
            curr = curr->next;
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        
        return dummy.next;
    }
};