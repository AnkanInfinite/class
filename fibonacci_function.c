//Fibonacci series using function
#include<stdio.h>
void fibonacci(int num);
int main(){
    int n=0;
    printf("Enter Number of terms to print : ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}

void fibonacci(int num){
    int num1=0;
    int num2=1;
    printf("%d %d ",num1,num2);
    for(int i=3;i<=num;i++){
        int num3=num1+num2;
        printf("%d ",num3);
        num1=num2;
        num2=num3;
    }
}