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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* main=new ListNode();
        ListNode* final=main;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                ListNode* temp=new ListNode(list1->val);
                main->next=temp;
                main=main->next;
                list1=list1->next;
            }
            else{
                ListNode* temp=new ListNode(list2->val);
                main->next=temp;
                main=main->next;
                list2=list2->next;
            }
        }
        while(list1!=NULL){
            ListNode* temp=new ListNode(list1->val);
                main->next=temp;
                main=main->next;
                list1=list1->next;
        }
        while(list2!=NULL){
            ListNode* temp=new ListNode(list2->val);
                main->next=temp;
                main=main->next;
                list2=list2->next;
        }
        return final->next;
    }
};