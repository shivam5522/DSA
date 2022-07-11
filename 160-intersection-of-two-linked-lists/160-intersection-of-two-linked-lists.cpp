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
        bool flag=false;
        int v=0;
        map<ListNode*,int> track;
        while(headA!=NULL){
            track[headA];
            headA=headA->next;
        }
        while(headB!=NULL){
            if(track.count(headB)){
                flag=true;
                v=headB->val;
                break;
            }
            track[headB];
            headB=headB->next;
        }
        // if(flag){
        //     cout<<"Intersected at "<<v;
        // }
        // else{
        //     cout<<"No intersection";
        // }
        return headB;
    }
};