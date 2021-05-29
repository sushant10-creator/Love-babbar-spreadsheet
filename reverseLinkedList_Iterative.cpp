#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;

};

struct Linkedlist{

struct Node* head = NULL;

void insert(int n){
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));     //address is stored into temp1
    temp1->data=n;
    temp1 ->next =head;
    head =temp1;
}
void printLinkedlist(){
    struct Node* temp2 = head;
    while (temp2!=NULL)
    {
        cout<<temp2->data<<" ";

        temp2= temp2->next;
    }
    cout<<endl<<"______end___________\n\n";
    
}
/*
        _________       _________
head--->|Node 1 | ----->|Node 2 | ------> etc.
        |_______|       |_______|
*/

void reverse()
    {
        // Initialize current, previous and
        // next pointers
        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
    }
};

int main(){
    Linkedlist l1;
    
    for (int i = 1; i <=5; i++)
    {
        l1.insert(i);
    }
    l1.printLinkedlist();

    l1.reverse();

    l1.printLinkedlist();
    
    

}