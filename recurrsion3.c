#include <stdio.h>
int f_x(int);
int g_x(int);
int f_x(int n){
    printf("we are in f(x) for x=%d\t",n);
    if(n<=0){
        return 1;
    }
    else{
    return n*g_x(n-1);
     }
    }
    int g_x(int n){
        printf("we are in g(x) for x=%d\t",n);
        if(n<=0){
            return 2;
        }
        else{
            return n-f_x(n-2);
        }
    }
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    int f_X=f_x(n);
    int g_X=g_x(n);
    printf("\nf(x) for x=%d is %d\n",n,f_X);
    printf("\ng(x) for x=%d is %d\n",n,g_X);

    
    return 0;
}