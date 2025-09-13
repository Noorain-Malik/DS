#include <stdio.h>
void enter(char arr[],int n){
    printf("enter the elements of an array");
    for(int i=0;i<n;i++){
        scanf(" %c", &arr[i]);
    }
}
void display(char*ptr,int n){
    int i=0;
    while(ptr+i<ptr+n){
        printf("%c ",*(ptr+i));
        i++;
    }
}
int insert_random(char arr[],int n,char*ptr){
if(n<100){
int position;
printf("enter the position at which you want to enter the char");
scanf("%d",&position);
char element;
printf("enter the char you want to enter");
scanf(" %c",&element);
for ( int i = n; i >= position ; i--)
{
    arr[i]=arr[i-1];
}
arr[position-1]=element;
n++;
display(ptr,n);
}
else{
    printf("insertion not possible");
    
}
return n;
}
int delete_random(char arr[],int n,char*ptr){
if(n!=0){
int position;
printf("enter the position on which you want to delete");
scanf("%d",&position);
for ( int i = position; i <n ; i++)
{
    arr[i-1]=arr[i];
}
n--;
display(ptr,n);
}
else{
    printf("there is no element in array");
}
return n;

}
int main(){
     char arr [100];
    int size;
    printf("enter the no. of elements");
    scanf("%d",&size);
    enter(arr,size);
    char* ptr=arr;
    display(ptr,size);
    size=insert_random(arr,size,ptr);
    size =delete_random(arr,size,ptr);
return 0;
}