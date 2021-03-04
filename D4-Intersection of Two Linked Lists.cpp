class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA = headA, *tempB = headB;
        
        while (tempA!=NULL || tempB!=NULL) {
            if (tempA == tempB) 
                return tempA;
            if (tempA!=NULL) 
                tempA = tempA->next;
            else 
                tempA = headB;
            if (tempB!=NULL) 
                tempB = tempB->next;
            else 
                tempB = headA;
        }
        return NULL;
    }
};
