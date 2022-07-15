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
    ListNode* sortList(ListNode* head) {
        vector<int> vals;
        ListNode* temp=head;
        while(temp){
            vals.push_back(temp->val);
            temp=temp->next;
        }
        sort(vals.begin(),vals.end());
        ListNode* fin=new ListNode();
        ListNode* final=fin;
        for(auto i:vals){
            ListNode* t=new ListNode(i);
            fin->next=t;
            fin=fin->next;
        }
        return final->next;
    }
};