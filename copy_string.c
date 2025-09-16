#include <stdio.h>
int size(char str[]){
    int count=0;
    for (int i = 0;str[i]!='\0'; i++)
    {
        count++;
    }
    return count;
    
}
void copy_string(char destination[],char source[],int l1){
    for(int i=0;i<=l1;i++){
        destination[i]=source[i];
    }
}
int main(){
    char source[100],destination[100];
    printf("enter the source string");
    scanf("%s",source);
    int l1=size(source);
    if(l1+1<100){
      copy_string(destination,source,l1);
      printf("the destination string is");
      printf("%s",destination);
    }
    else
    printf("copy not possible");
    return 0;
}