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
    ListNode* head= new ListNode();
    ListNode* root=head;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        while(l1!=NULL && l2!=NULL){
            int total=l1->val+l2->val+carry;
            carry=0;
            if(total>=10){
                total=total%10;
                carry=1;
            }
            ListNode* temp= new ListNode(total);
            head->next=temp;
            head=head->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            int tot=l1->val+carry;
            carry=0;
            if(tot>=10){
                tot=tot%10;
                carry=1;
            }
            ListNode* temp= new ListNode(tot);
            head->next=temp;
            head=head->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            int tot=l2->val+carry;
            carry=0;
            if(tot>=10){
                tot=tot%10;
                carry=1;
            }
            ListNode* temp= new ListNode(tot);
            head->next=temp;
            head=head->next;
            l2=l2->next;
        }
        if(carry==1){
            ListNode* temp=new ListNode(1);
            head->next=temp;
            head=head->next;
        }
        root=root->next;
        return root;
    }
};