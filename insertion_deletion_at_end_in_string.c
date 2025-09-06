#include <stdio.h>
void display_str(char str[]){
printf("%s",str);
}
int insert_end(char str[],int l){
if(l<99){
        char n;
        printf("enter the character you want to insert at the end");
        scanf(" %c",&n);
        str[l+1]=str[l];
        str[l]=n;
        display_str(str);
        return ++l;       //use ++l
        
    }
    else
    printf("insertion is not possible");
    return l;
}
void delete_end(char str[],int l){
    if(l!=0){
        str[l-1]=str[l];
        display_str(str);
    }
}

int main(){
    char str[100];
    printf("enter the string");
    scanf("%s",str);
    display_str(str);
    int length=0;
    int i=0;
    while(str[i]!='\0'){
     length++;
     i++;
    }
    length=insert_end(str,length);
    delete_end(str,length);
    return 0;
}
