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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* mergedList;
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        if(l1->val<l2->val)
        {
            mergedList=l1;
            l1=l1->next;
        }
        else{
            mergedList=l2;
            l2=l2->next;
        }
          ListNode* temp=mergedList;  
        
        while(l1 && l2){
            if(l1->val<l2->val){
                temp->next=l1;
                l1=l1->next;
                temp=temp->next;
            }
            else{
                temp->next=l2;
                l2=l2->next;
                temp=temp->next;
            }
        }
        if(l1==NULL)
        {
            temp->next=l2;
        }
        else
            temp->next=l1;
        
        return mergedList;
    }
};
