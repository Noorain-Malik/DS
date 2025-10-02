//by using it you can't inser at element at beg ,for that you have to include if else(special case
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* create_node(int n){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;
    return newnode;
    
}
struct node* createlist(int size){
    struct node *head=NULL,*temp=NULL,*newnode=NULL;
    int value;
    for(int i=0;i<size;i++){
      printf("enter the value for %d node",i+1);
      scanf("%d",&value);
      newnode=create_node(value);
      if(head==NULL){
        head=newnode;
        temp=head;
      }
      else{
        temp->next=newnode;
        temp=newnode;
      }
    }
    return head;
}
void display_linked_list(struct node* ptr){
while(ptr!=NULL){
    printf(" %d\n",ptr->data);
    ptr=ptr->next;
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
void insert_random(struct node* ptr,int element){
    for(int i=0;ptr->data!=element;i++){    //for insertion at fronrt add special case
        ptr=ptr->next;
    }
    int n;
    printf("enter the value you want to insert in new node");
    scanf("%d",&n);
 struct node* newnode=create_node(n);
 newnode->next=ptr->next;
 ptr->next=newnode;
  

}
/*for insertion at 3rd position
void inert_random_position(struct node* ptr,int position){
if (position < 1) {
        printf("Invalid position\n");
        return;
    }
    for(int i=0;i<position-1 && ptr != NULL;i++){
        ptr=ptr->next;
    }
    int n;
    printf("enter the value you want to insert in new node");
    scanf("%d",&n);
 struct node* newnode=create_node(n);
 newnode->next=ptr->next;
 ptr->next=newnode;
*/

int main(){
    int n;
    printf("How many nodes do you want? ");
    scanf("%d", &n);

    struct node* head = createlist(n);
    display_linked_list(head);
    int element;
    printf("enter the element after which you want to insert new node");
    scanf("%d",&element);
    insert_random(head,element);
    display_linked_list(head);

    freeList(head);
    return 0;
}
