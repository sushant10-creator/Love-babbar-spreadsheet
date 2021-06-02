#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
    int flag;
    Node(){
        flag = 0;
    }
};

bool detectLoop(Node *head){
    Node* node;
    node = head;
    while(node!= NULL){
        if(node->flag ==1){
            return true;
        }
        node->flag =1;
        node = node->next;
    }
    return false;
}
/*
using set:
bool detectLoop(Node* head)
    {

       unordered_set<Node*> s;
    while (head != NULL) {
        // If this node is already present
        // in hashmap it means there is a cycle
        // (Because you we encountering the
        // node for the second time).
        if (s.find(head) != s.end())
            return true;
 
        // If we are seeing the node for
        // the first time, insert it in hash
        s.insert(head);
 
        head = head->next;
    }
 
    return false;
    }
*/

void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();
 
    /* put in the data */
    new_node->data = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 

 
/* Driver code*/
int main()
{
    /* Start with the empty list */
    Node* head = NULL;
 
    /* Created Linked list
       is 1->2->3->4->5->6->7->8->9 */
    push(&head, 9);
    push(&head, 8);
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
    
    // head->next->next->next->next = head;

    cout<<detectLoop(head);
    
 
   
    return (0);
}