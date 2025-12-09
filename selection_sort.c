#include <stdio.h>
void selection_sort(int arr[],int size){
   for(int i=0;i<size-1;i++){
         int min=i;
        for(int j=i+1;j<size;j++){
               if(arr[j]<arr[min]){
                min=j;
               }
            }
               int temp=arr[i];
               arr[i]=arr[min];
            arr[min]=temp;
        
   }
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

int main(){
    int arr[20];
    printf("enter the size of an array\n");
    int size;
    scanf("%d",&size);
    printf("enter the elements of an array\n");
    input(arr,size);
    display(arr,size);
    selection_sort(arr,size);
    display(arr,size);

    return 0;
}