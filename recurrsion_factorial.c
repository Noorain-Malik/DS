#include <stdio.h>
int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int number;
    printf("enter the number");
    scanf("%d",&number);
    if(number<0){
    printf("factorial of negative number doesnot exist");
    }
    else{
    int result=factorial(number);
    printf("the factorial of%d is %d",number,result);
    }
    return 0;
}