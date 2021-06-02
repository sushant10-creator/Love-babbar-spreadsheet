//leetcode
//works perfectly in detecting the starting point of the loop
#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int data;
    ListNode* next;
};
ListNode *detectCycle(ListNode *head) {
        ListNode *slow_ptr=head, *fast_ptr=head, *watcher=head;
        if(head==NULL||head->next==NULL){
            return NULL;
        }
        while(fast_ptr->next!=NULL){
            if(fast_ptr->next->next==NULL){
                return NULL;
            }
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
        if(slow_ptr ==fast_ptr){
            while(watcher!=slow_ptr){
                slow_ptr = slow_ptr->next;
                watcher = watcher->next;
            }
            return watcher;
        }
    
    }
        return NULL;
        
}
    