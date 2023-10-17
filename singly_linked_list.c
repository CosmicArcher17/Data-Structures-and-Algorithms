#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* link;
}*head, *temp,*newnode;

void createnode(){
    
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;

    printf("Enter data for node:\n");
    scanf("%d",&newnode->data);
    newnode->link=NULL;

    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=newnode;

}
void insertb(){
    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter value for new head node:\n");
    scanf("%d",&newnode->data);
    newnode->link=head;

    head=newnode;
}

void inserte(){
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter value for new end node:\n");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    temp=head;

    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=newnode;
}

void delend(){
    temp=head;
    while(temp->link->link!=NULL){
        temp=temp->link;
    }
    temp->link=NULL;
}

void delfir(){
    temp=head;
    temp=temp->link;
    head=temp;
}

void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->link;
    }
    
}
int main(){
    head=(struct node*)malloc(sizeof(struct node));

    printf("Enter head node data:\n");
    scanf("%d",&head->data);
    head->link=newnode;

    
    for(int i=0;i<3;i++){
        createnode();
    }
    insertb();
    inserte();
    delend();
    delfir();
    display();
}
