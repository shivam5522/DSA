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
    void reorderList(ListNode* head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL) return;
        stack<ListNode*> st;
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            st.push(temp);
            temp=temp->next;
            size++;
        }
        temp=head;
        for(int i=0;i<size/2;i++){
            ListNode* t=st.top();
            st.pop();
            t->next=temp->next;
            temp->next=t;
            temp = temp->next->next;
        }
        temp->next=NULL;
    }
};