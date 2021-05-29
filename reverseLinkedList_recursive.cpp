#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
    Node* head = NULL;
struct linkedlist{

    void insertlinkedlist(int n){
        Node* temp = (Node* )malloc(sizeof(Node));

        temp-> data = n;
        temp->next = head;

        head = temp;
    }
    void printlinkedlist(){
        Node* temp = head;
        cout<<"-------"<<endl;
        while(temp!=NULL){
            cout<<temp->data<<" "<<endl;
            temp= temp->next;
        }
        cout<<"-------"<<endl;
    }
    Node* reverselinkedlist(Node* node){
        if(node==NULL){
            return NULL;
        }
        if(node->next==NULL){
            head = node;
            return node;
        }
        Node* node1 = reverselinkedlist(node->next);
        node1->next = node;
        node->next = NULL;
        return node; 
    }
};
int main(){
    linkedlist linkedlist;
    for (int i = 0; i < 5; i++)
    {
        linkedlist.insertlinkedlist(i+1);
    }
    linkedlist.printlinkedlist();
    linkedlist.reverselinkedlist(head);     //"linkedlist.head" can also be used if head is private to linkedlist struct.
    linkedlist.printlinkedlist();

    return 0;

}