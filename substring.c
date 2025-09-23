#include <stdio.h>
int length(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
       count++;
    }
    return count;
}

   
int main(){
    int c;
    char main_str[100];
    char sub_str[100];
    int sub_string=0;
    printf("enter main string");
    scanf("%s",main_str);
   printf("enter second string which needs to be checked");
   scanf("%s",sub_str);
int l1=length(main_str);
int l2=length(sub_str);
 int n=0,count=0;
 for(int i=0;i<l1;i++){
    if(main_str[i]==sub_str[0]){
        n=i;
        if(count==l2){
            break;
        }
        for(int j=0;j<l2&&i<l1;j++,n++){
            if(main_str[n]==sub_str[j]){
                sub_string=1;
                count++;
            }
            else{
                sub_string=0;
                count=0;
                break;
            }
        }
    }
 }
 if(sub_string){
    printf("it is a substring");
 }
 else{
    printf("it is not a substring");
 }
    return 0;
}