/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        Node* lead=head;
        Node* ptr=NULL;      
        Node* beta=NULL;   // beta is child node
        while(head){
            if(head->child){
                ptr=head->next;
                beta=head->child;
                head->child=NULL;
                head->next=beta;
                beta->prev=head;
                while(beta->next){
                    beta=beta->next;
                }
                if(ptr)
                    ptr->prev=beta;
                beta->next=ptr;
            }
            head=head->next;
        }
        return lead;
    }
};