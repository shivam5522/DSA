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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=new ListNode();
        ListNode* main=curr;
        map<int,int> m;
        while(head!=NULL){
            if(m.count(head->val)){
                head=head->next;
            }
            else{
            m[head->val]++;
            ListNode* temp=new ListNode(head->val);
            curr->next=temp;
            curr=curr->next;
            head=head->next;
            }
        }
        return main->next;
    }
};