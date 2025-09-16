#include <stdio.h>
int size(char str[]){
    int count=0;
    for (int i = 0;str[i]!='\0'; i++)
    {
        count++;
    }
    return count;
    
}
int compare_string(char str1[],char str2[],int l){
for(int i=0;i<l;i++){
    if(str1[i]!=str2[i]){
        return str1[i]-str2[i];
    }
}
return 0;
}

int main(){
    char str1[100];
    char str2[100];
    int result=0;
    printf("enter the string");
    scanf("%s",str1);
    printf("enter second string");
     scanf("%s",str2);
     int l1=size(str1);
     int l2=size(str2);
     if(l1==l2){
        result=compare_string(str1,str2,l1);
      if(result==0){
        printf("the strings are similar");
      }
      else {
      printf("the strings are not similar");
     }
    }
     else{
     printf("strings are not equal");
     }
    return 0;
}