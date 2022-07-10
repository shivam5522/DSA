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
    ListNode* middleNode(ListNode* head) {
        float len=0;
        ListNode* temp=head;
        while(temp->next!=NULL){
            len++;
            temp=temp->next;
        }
        int mid=round(len/2);
        while(head->next!=NULL){
            if(mid==0) break;
            head=head->next;
            mid--;
        }
        return head;
    }
};