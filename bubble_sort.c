#include <stdio.h>
void bubble_sort(int arr[],int size){
    int temp;
    int flag;
for(int i=0;i<size-1;i++){
   flag=0;
    for(int j= 0;j<size-1-i;j++){
          if(arr[j]>arr[j+1]){
               temp=arr[j+1];
               arr[j+1]=arr[j];
               arr[j]=temp;
               flag=1;
          }
    }
    if(!flag)
    break;
}
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
    printf("%d \t",arr[i]);
    }
}
void insert(int arr[],int size){
    printf("enter the elements of an array\n");
    for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
    }
}

int main(){
   int arr[30];
    int size;
    printf("enter the size of an array");
    scanf("%d",&size);
    insert(arr,size);
    printf("original array\n");
    display(arr,size);
    bubble_sort(arr,size);
     printf(" sorted array \n");
     display(arr,size);

    return 0;
}