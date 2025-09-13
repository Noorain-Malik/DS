#include <stdio.h>
int f_x(int);
int f_x(int  n){
    if(n==1||n==0){
        return 1;
    }
    return n+f_x(n-1)-f_x(n-2);
}

int main(){
    int num;
    printf("enter the num");
    scanf("%d",&num);
    int result;
    result=f_x(num);
    printf("%d",result);
    return 0;
}