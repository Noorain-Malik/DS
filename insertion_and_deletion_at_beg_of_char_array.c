#include <stdio.h>
void enter(char arr[],int n){
    printf("enter the elements");
    for (int i = 0; i < n; i++)
    {
        scanf(" %c",&arr[i]);
    }
    
}
void display(char* ptr,int n){
    for (int i  = 0;  i< n; i++)
    {
        printf("%c",*(ptr+i));
    }
    
}
int insert_beg(char arr[],int a,char*ptr){
    if(a<100){
        for (int i = a; i ; i--)
        {
        arr[i]=arr[i-1];
        }
        char n;
        printf("enter char that you want to insert at the beginning");
        scanf(" %c",&n);
        arr[0]=n;
        a++;    //yeh a++ khali isi function mein hoga funtion k bahar yeh waopas pehle wali value lega
        display(ptr,a);
        return a; //taki naya size main function mein pata chale 
        
    }
    else{
    printf("insertion is not possible");
    return a;
    }
}
 int delete_beg(char arr[],int a,char*ptr){
if(a!=0){
    for(int i=0;i<a-1;i++){
        arr[i]=arr[i+1];
    }
    a--;
    display(ptr,a);
    return a;
}
else{
printf("deletion not possible");
return a;
}
 }

int main(){
    char arr[100];
    int size;
    printf("enter the size of char array");
    scanf("%d",&size);
    enter(arr,size);
    char* ptr=&arr[0];
     size=insert_beg(arr,size,ptr);
     // printf("%d",size);
    size =delete_beg(arr,size,ptr);
    return 0;
}