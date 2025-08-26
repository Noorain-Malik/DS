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
        printf("%d",*ptr+i);
        i++;
    }
}
void insert(int arr[],int a,int*ptr){
if(a<100){    
        int n;
        printf("enter the number you want to insert");
        scanf("%d",&n);
        arr[a]=n;
        a++;
        display(ptr,a);
    }
    else
    printf("insertion is not possible");
}
void delete(int arr[],int a,int*ptr){
if(a!=0){       // abhi last element ab yahan n hai jo insert se laya
          a--;
          display(ptr,a);
     }
     else 
     printf("there is no element in an array");
}
int main(){
    int arr[100];
    int elements;
    printf("enter the no. of elements");
    scanf("%d",&elements);
    enter(arr,elements);
    int* ptr=arr;
    display(ptr,elements);
  
                // insert an elementat the end in an array
     
        insert(arr,elements,ptr);


               //delete the last element of an array,

         delete(arr,elements,ptr);
      

    

    return 0;
}