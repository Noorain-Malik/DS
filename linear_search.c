#include <stdio.h>
void enter(int arr[],int size){
    printf("enter the elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}

int search(int a[],int b,int c){
    
 for (int i = 0; i < b; i++)
    {
        if(a[i]==c){
        return i+1;
    }
}
    return 0;
    

    
}

int main(){
    int arr[30];
    int size;
    printf("enter the number of elements\n");
    scanf("%d",&size);
    enter(arr,size);
    int num;
    printf("enter number to search");
    scanf("%d",&num);
   int e= search(arr,size,num);
   if(e){
    printf("num presentat %d",e);
   }
   else{
    printf("not found");
   }
    
    return 0;
}
