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
    int getDecimalValue(ListNode* head) {
        string b="";
        while(head!=NULL){
            b+=to_string(head->val);
            head=head->next;
        }
        long long int final=0;
        int mul=0;
        for(int i=b.length()-1;i>=0;i--){
            if(b[i]=='1') final+=pow(2,mul);
            mul++;
        }
        return final;
    }
};