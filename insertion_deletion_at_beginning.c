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
void insert_beg(int arr[],int a,int*ptr){
    if(a<100){
        for (int i = a; i ; i--)
        {
        arr[i]=arr[i-1];
        }
        int n;
        printf("enter the number you want to insert at the beginning");
        scanf("%d",&n);
        arr[0]=n;
        a++;    //yeh a++ khali isi function mein hoga funtion k bahar yeh waopas pehle wali value lega
        display(ptr,a);
        
    }
    else
    printf("insertion is not possible");
}
void delete_beg(int arr[],int a,int*ptr){
if(a!=0){
    for(int i=0;i<a;i++){
        arr[i]=arr[i+1];
    }
    a--;
    display(ptr,a);
}
else
printf("deletion not possible");
}

int main(){
    int arr[100];
    int elements;
    printf("enter the no. of elements");
    scanf("%d",&elements);
    enter(arr,elements);
    int* ptr=arr;
    display(ptr,elements);
   insert_beg(arr,elements,ptr);
   delete_beg(arr,elements,ptr);
    return 0;
}