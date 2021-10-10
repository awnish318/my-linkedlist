/* code for inserting new node in the linkedlist
three ways through which we insert the node
1.at the front.
2.add anode after a given node.
3.add a node at last*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next; 
};
// adding node in front.
void push(Node**head_ref,int new_data){
    // step 1 allocate data as mention below
    Node* new_node= new Node();
   //adding the data in node 
    new_node->data=new_data;
    // making next of new node as head
    new_node->next=(*head_ref);
    // move the head to point to the new node
    (*head_ref)=new_node;
}
void insertafter(Node*prev_node,int new_data){
    if(prev_node=NULL){
        cout<<"the given previous cannot be NULL"<<endl;
    }
    Node* new_node=new Node();
    new_node->data=new_data;

    new_node->next=prev_node->next;/*make next of new node as next of prev-node*/
    prev_node->next=new_node;/*move the next of prev_node as new_mode*/
}
void append(Node**head_ref,int new_data){
    Node* new_node= new Node();
    Node*last=*head_ref;

    new_node->data=new_data;
    new_node->next=NULL;
    if(*head_ref==NULL){
        *head_ref=new_node;
        return;
    }
    while(last->next!= NULL){
        last=last->next;
        last->next=new_node;
        return;
    }
}
    void printlist(Node *node){
        while(node != NULL){
            cout<<node->data<<" ";
            node=node->next;
        }
    }

int main() {
    Node *head=NULL;
    append(&head,6);
    push(&head,7);
    push(&head,8);
    push(&head,9);
//     insertafter(head->next,2);

    printlist(head);
    return 0;
    
}
