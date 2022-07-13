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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> temp;
        int len1=0,len2=0;
        ListNode* t1=l1;
        ListNode* t2=l2;
        while(t1!=NULL){
            len1++;
            t1=t1->next;
        }
        while(t2!=NULL){
            len2++;
            t2=t2->next;
        }
        while(len1>len2){
            temp.push(l1->val);
            l1=l1->next;
            len1--;
        }
        while(len1<len2){
            temp.push(l2->val);
            l2=l2->next;
            len2--;
        }
        while(l1!=NULL){
            temp.push(l1->val+l2->val);
            l1=l1->next;
            l2=l2->next;
        }
        ListNode* final=new ListNode();
        int carry=0;
        int count=0;
        while(!temp.empty()){
            int v=temp.top()+carry;
            temp.pop();
            carry=0;
            if(v>=10){
                v=v%10;
                carry=1;
            }
            ListNode* t=new ListNode(v);
            if(count==0){
                final=t;
            }
            else{
                t->next=final;
                final=t;
            }
            count++;
        }
        if(carry==1){
            ListNode* f=new ListNode(1);
            f->next=final;
            final=f;
        }
        return final;
    }
};