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
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> visited;
        while(head!=NULL){
            if(visited.count(head)) return true;
            visited[head]++;
            head=head->next;
        }
        return false;
    }
};