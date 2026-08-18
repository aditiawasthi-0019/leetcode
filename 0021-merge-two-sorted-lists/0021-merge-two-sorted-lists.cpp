class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        ListNode* dNode = new ListNode(-1);
        ListNode* temp = dNode;

        while (l1 != nullptr && l2 != nullptr) {

            if (l1->val <= l2->val) {
                temp->next = l1;
                l1 = l1->next;
            }
            else {
                temp->next = l2;
                l2 = l2->next;
            }

            temp = temp->next;
        }

        if (l1 != nullptr)
            temp->next = l1;
        else
            temp->next = l2;

        return dNode->next;
    }
};