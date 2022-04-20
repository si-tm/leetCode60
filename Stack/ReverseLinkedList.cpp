#include<stack>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *new_list = new ListNode(), *new_head = new_list;   
        stack<int> s;
        while(head != nullptr){
            s.push(head->val);
            head = head->next;
        }
        while(!s.empty()){
            ListNode *tmp = new ListNode(s.top());
            s.pop();
            // new_list = tmp;
            new_list->next = tmp;
            new_list = new_list->next;
        }
        return new_head->next;
    }
};