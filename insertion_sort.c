#include <stdio.h>
void insertion_sort (int arr[],int size){
    int key,j;
    for(int i=1;i<=size-1;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
   insertion_sort(arr,size);
    display(arr,size);

    return 0;
}