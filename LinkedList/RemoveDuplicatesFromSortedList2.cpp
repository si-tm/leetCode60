#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;

        while(head != nullptr){
            if(head->next != nullptr && head->val == head->next->val){
                while(head->next != nullptr && head->val == head->next->val){
                    head = head->next;
                }
                cout << (head->next != nullptr) << endl;
                prev->next = head->next;
            }
            else{
                prev = prev->next;
            }
            head = head->next;
        }

        return dummy->next;

    }
};