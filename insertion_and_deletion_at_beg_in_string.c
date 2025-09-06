#include <stdio.h>
void display_str(char str[]){
printf("%s",str);
}
int insert_beg(char str[],int l){
if(l<99){
for (int i = l; i>=0 ; i--)
        {
        str[i+1]=str[i];
        }
        char n;
        printf("enter the character you want to insert at the beginning");
        scanf(" %c",&n);
        str[0]=n;
        display_str(str);
        return ++l;
        
    }
    else
    printf("insertion is not possible");
    return l;
    
}
void delete_beg(char str[],int l){
    if(l!=0){
        for(int i =0;i<l;i++){
        str[i]=str[i+1];
        }
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
    length=insert_beg(str,length);
    delete_beg(str,length);

    return 0;
}