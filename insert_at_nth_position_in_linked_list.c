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
     return newnode;
}
struct node* create_list(int n){
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
    return head;
}
void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
void freeList(struct node* head) {
    struct node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
 struct node* insert_random(struct node* head,int n){
    struct node*temp=head,*prev_node=NULL,*newnode;
    int value;
if(n==1){
    printf("enter the value you want to insert in new node");
    scanf("%d",&value);
    head=create_node(value);
    head->prev=NULL;
    head->next=temp;
    temp->prev=head;
    return head;
}
else{
    for(int i=1;i<n;i++){
        prev_node=temp;
       temp=temp->next;
    }
    printf("enter the value you want to insert in new node");
    scanf("%d",&value);
    newnode=create_node(value);
    newnode->next=temp;
    newnode->prev=prev_node;
    prev_node->next=newnode;
    temp->prev=newnode;
 return head;
}

 }
int main(){
    int n;
    printf("enter the number of nodes you want to insert");
    scanf("%d",&n);
    struct node* head=create_list(n);
    display(head);
   int position;
   printf("enter the position at which you want to insert the nord");
   scanf("%d",&position);
   if(position>n) {
    printf("insertion is not possible");
   }
   else{
    head=insert_random(head,position);
    display(head);
   }
    freeList(head);
    return 0;
}