#include <stdio.h>
int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low+1;
    int j=high;
     int temp;
     do{
    while(i < high && arr[i]<=pivot){
        i++;
    }
    while(j > low &&arr[j]>pivot){
        j--;
    }
    if(i<j){
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
    }
}while(j>i);
   temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
void input(int arr[],int size){
 for(int i=0;i<size;i++){
    scanf("%d",&arr[i]);
 }
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
void quickSort(int arr[],int low,int high){
    if(low<high){
        int partionIndex=partition(arr,low,high);
        quickSort(arr,low,partionIndex-1);
        quickSort(arr,partionIndex+1,high);
     }
     else{
        return;
     }
}
int main(){
    int arr[20];
    printf("enter the size of an array\n");
    int size;
    scanf("%d",&size);
    printf("enter the elements of an array\n");
    input(arr,size);
    display(arr,size);
    quickSort(arr,0,size-1);
    display(arr,size);

    
    return 0;
}