
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
        if(head == nullptr) return head;
        ListNode *pre, *cur = head;
        pre = new ListNode(-1, head);
        while(cur->next != nullptr){
            if(cur->val == cur->next->val){
                while(cur->val == cur->next->val && cur->next != nullptr) cur = cur->next;
                pre->next = cur->next;
            }
            else{
                pre = pre->next;
            }
            cur = cur->next;
        }
    }
}