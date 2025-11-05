//Factorial of a Number Using Function
#include<stdio.h>
int factorial(int num);
int main(){
    int n=0;
    printf("Enter Number to find factorial of : ");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,factorial(n));
    return 0;
}
int factorial(int num){
    int fact=1;
    for(int i=num;i>0;i--){
        fact=fact*i;
    }
    return fact;
}