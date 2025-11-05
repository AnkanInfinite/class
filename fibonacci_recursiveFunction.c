//Fibonacci series using Recursive function
#include<stdio.h>
int fibonacci(int num);//To calculate n th fibonacci term
int main(){
    int n=0;
    printf("Enter Number of terms to print : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ",fibonacci(i));
    }

    return 0;
}

int fibonacci(int num){
    if(num<=0){
        return 0;
    }
    else if (num==1){
        return 1;
    }
    return fibonacci(num-1) + fibonacci(num-2);
}