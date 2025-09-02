#include <stdio.h>
void enter(int arr[],int n){
    printf("enter the elements of an array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
void display(int*ptr,int n){
    int i=0;
    while(ptr+i<ptr+n){
        printf("%d",*(ptr+i));
        i++;
    }
}
void insert_random(int arr[],int n,int*ptr){
if(n<100){
int position;
printf("enter the position on which you want to enter the num");
scanf("%d",&position);
int number;
printf("enter the number you want to enter");
scanf("%d",&number);
for ( int i = n; i >= position ; i--)
{
    arr[i]=arr[i-1];
}
arr[position-1]=number;
n++;
display(ptr,n);
}
else{
    printf("insertion not possible");
}
}
void delete_random(int arr[],int n,int*ptr){
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

}
int main(){
    int arr[100];
    int elements;
    printf("enter the no. of elements");
    scanf("%d",&elements);
    enter(arr,elements);
    int* ptr=arr;
    display(ptr,elements);
    insert_random(arr,elements,ptr);
    delete_random(arr,elements,ptr);
return 0;
}
