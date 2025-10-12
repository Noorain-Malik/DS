#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node* prev;
};
struct node* create_node(int n){
     struct node* newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=n;
     newnode->next=NULL;
     newnode->prev=NULL;
     return newnode;
}
struct node* create_list(int n){
    if (n <= 0) return NULL;
    struct node* head=NULL,*temp=NULL,*newnode;
    for(int i=0;i<n;i++){
        int data;
        printf("enter the value you want to enter in node");
        scanf("%d",&data);
        newnode=create_node(data);
        if(head==NULL){
            head=newnode;
            head->prev=NULL;
            temp=head;
        }
        else{
            newnode->prev=temp;
            temp->next=newnode;
            temp=newnode;
            temp->next=NULL;
        }
    }
    temp->next=head;
    head->prev=temp;
    return head;
}
void display(struct node* head){
    if(head==NULL){
        printf("the list is empty");
        return;
    }
    struct node* temp=head;
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=head);
}
void freeList(struct node* head) {
    if(head==NULL){
        printf("the list is empty");
        return;
    }
    struct node* temp=head,*nextnode;
   do{
    nextnode=temp->next;
    free(temp);
    temp=nextnode;
   }while(temp!=head);
   head = NULL;
}



int main(){
    int n;
    printf("enter the number of nodes you want to insert");
    scanf("%d",&n);
    struct node* head=create_list(n);
    display(head);
    freeList(head);
    return 0;
}