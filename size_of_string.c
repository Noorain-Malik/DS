#include <stdio.h>
int size(char str[]){
    int count=0;
    for (int i = 0;str[i]!='\0'; i++)
    {
        count++;
    }
    return count;
    
}

int main(){
    char str[100];
    printf("enter the string");
    scanf("%s",str);
    int length=size(str);
    printf("the length of string is %d",length);
    return 0;
}