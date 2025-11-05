#include <stdio.h>
void enter(int arr[],int size){
    printf("enter the elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
int binarySearch(int arr[],int size,int element){
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==element){
        return mid;
    }
    if(arr[mid]<element){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
}
return -1;
}
int main(){
    int arr[30];
    int size;
    int result;
    printf("enter the number of elements\n");
    scanf("%d",&size);
    enter(arr,size);
    int num;
    printf("enter number to search");
    scanf("%d",&num);
    result = binarySearch(arr, size, num);

    if (result != -1)
        printf("Element found at position %d\n", result + 1); // 1-based index
    else
        printf("Element not found\n");
    return 0;
}