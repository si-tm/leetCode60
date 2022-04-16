
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // サイクルが無い場合
        if(head == nullptr || head->next == nullptr || head->next->next == nullptr) return nullptr;
        ListNode *fast = head, *slow = head;
        //fastとslowが出会うまで動かす
        while(fast&&fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) break;
        }
        if(slow != fast) return nullptr;
        //slowとheadが出会うまで動かす
        while(slow != head){
            slow = slow->next;
            head = head->next;
        }
        return head;
    }
};