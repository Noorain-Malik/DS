#include <stdio.h>
void merge(int arr[],int low,int mid,int high){
    int i=low,k=0;
    int j=mid+1;
    int b[100];
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
            i++;
            k++;
        }
         else{
            b[k]=arr[j];
            k++; 
            j++;
    }
}
while(i<=mid){
    b[k]=arr[i];
    i++;
    k++;
}
while(j<=high){
    b[k]=arr[j];
    j++;
    k++;
}
for(int s =0;s<=high;s++){
   arr[low+s]=b[s];
}
}
void mergeSort(int arr[],int low,int high){
    if(low<high){
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
    }
    else
    return;

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
    mergeSort(arr,0,size-1);
    display(arr,size);


   
    return 0;
}