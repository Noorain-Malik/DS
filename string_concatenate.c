#include <stdio.h>
int size(char str[]){
    int count=0;
    for (int i = 0;str[i]!='\0'; i++)
    {
        count++;
    }
    return count;
    
}
void concatenate_string(char str1[],char str2[],int l1,int l2){
   for(int i=0;i<=l2;i++){
       str1[l1+i]=str2[i];
   }
}

int main(){
    char str1[100],str2[100];
    printf("enter the string in which you want to concatenate");
    scanf("%s",str1);
    printf("enter the string you want to concatenate");
    scanf("%s",str2);
    int l1=size(str1);
    int l2=size(str2);
    if(l1+l2+1<100){
        concatenate_string(str1,str2,l1,l2);
        printf("%s",str1);
    }
    else{
        printf("concatenation not possible");
    }
    return 0;
}