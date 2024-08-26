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

//basically merging two sorted lists
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* newhead2=new ListNode(-1);
        ListNode* newhead=newhead2;
        while(list1 && list2){
            if(list1->val>=list2->val){
                newhead->next=list2;
                newhead=newhead->next;
                list2=list2->next;
            }
            else{
                newhead->next=list1;
                newhead=newhead->next;
                list1=list1->next;
            }
        }
        while(list1){
            newhead->next=list1;
            newhead=newhead->next;
            list1=list1->next;
        }
        while(list2){
            newhead->next=list2;
            newhead=newhead->next;
            list2=list2->next;
        }
        return newhead2->next;

    }
};