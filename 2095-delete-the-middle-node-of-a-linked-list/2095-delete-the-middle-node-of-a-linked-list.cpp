/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int cnt= 0;
        if(temp ==nullptr || temp->next ==nullptr)
        return nullptr;

        while(temp != nullptr)
        {
            cnt++;
            temp= temp->next;
        }
        temp=head;
        int mid = cnt/2;
        while(temp !=nullptr)
        {
            mid--;
            if(mid == 0)
            {
                ListNode* mid = temp ->next;
                temp->next = temp->next->next;
                delete(mid);

            }
            temp = temp->next;
        }
        return head;

    }
};