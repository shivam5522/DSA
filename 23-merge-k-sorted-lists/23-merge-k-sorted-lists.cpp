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
    
    ListNode* findMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        return slow;
    }
    
    ListNode* merge(ListNode* left,ListNode* right){
        if(left==NULL) return right;
        if(right==NULL) return left;
        
        ListNode* temp=new ListNode();
        ListNode* final=temp;
        
        while(left!=NULL && right!=NULL){
            if(left->val<right->val){
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else{
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
        while(left!=NULL){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        while(right!=NULL){
            temp->next=right;
            temp=right;
            right=right->next;
        }
        
        return final->next;
    }
    
    ListNode* mergesort(ListNode* head){
        
        //Base Case
        if(head==NULL || head->next==NULL) return head;
        
        //Finding mid and then splitting the LL into two halves
        ListNode* mid=findMid(head);
        ListNode* left=head;
        ListNode* right=mid->next;
        mid->next=NULL;
        
        //Recursive calls to sort both the halves
        left=mergesort(left);
        right=mergesort(right);
        
        //Merging both the sorted LL
        ListNode* result=merge(left,right);
        
        return result;
        
        
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* main=new ListNode();
        ListNode* final=main;
        for(auto l:lists){
            while(l){
                main->next=l;
                main=main->next;
                l=l->next;
            }
        }
        final=final->next;
        ListNode* ans=final;
        ListNode* answer=mergesort(final);
        return answer;
    }
};