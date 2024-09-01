#include<iostream>
#include<stdlib.h>
using  namespace std;

struct Node{
    int data;
    struct Node *link;
}*temp;
Node *head=NULL;

void createnode(Node *node,int value){
    if(node==NULL){
        node=(struct Node*)malloc(sizeof(struct Node));
        node->data=value;
        node->link=NULL;
        head=node;
        return;
    }
    else if(node->link==NULL){
        struct Node* p=(struct Node*)malloc(sizeof(struct Node));
        p->data=value;
        p->link=NULL;
        node->link=p;
        return;
    }
    else if(node->link!=NULL){
        node=node->link;
        createnode(node,value);
    }
}
void disp(struct Node* head){
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

int main(){
    int n;
    cin>>n;
    int item;
    for(int i=0;i<n;i++){
        cin>>item;
        createnode(head,item);
    }
    disp(head);
}
