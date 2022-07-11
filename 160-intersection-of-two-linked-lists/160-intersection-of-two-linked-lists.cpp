/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int diff=0;
        int len1=0,len2=0;
        ListNode* t1=headA;
        ListNode* t2=headB;
        while(t1!=NULL){
            len1++;
            t1=t1->next;
        }
        while(t2!=NULL){
            len2++;
            t2=t2->next;
        }
        if(len1>len2){
            diff=len1-len2;
            while(diff!=0){
                headA=headA->next;
                diff--;
            }
        }
        else if(len1==len2){
            ;
        }
        else{
            diff=len2-len1;
            while(diff!=0){
                headB=headB->next;
                diff--;
            }
        }
        while(headA!=NULL && headB!=NULL){
            if(headA==headB) return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return headA;
    }
};