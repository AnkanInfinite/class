/*
Swap values of two variables using third variable. Solve this problem using call by value and call by reference procedures.
*/
#include<stdio.h>
void swapByValue(int num1,int num2);
void swapByReference(int *num1,int *num2);
int main(){
    int a,b;
    printf("Enter value for a :");
    scanf("%d",&a);
    printf("Enter value for b :");
    scanf("%d",&b);
    printf("Swapping by call by value\n");
    swapByValue(a,b);
    printf("Value stored in a is %d and in b is %d \n",a,b);
    printf("Swapping by call by reference\n");
    swapByReference(&a,&b);
    printf("Value stored in a is %d and in b is %d \n",a,b);
    return 0;
}

void swapByValue(int num1,int num2){
    int temp=num1;
    num1=num2;
    num2=temp;
    printf("Value of a inside function is %d and b is %d \n",num1,num2);
}

void swapByReference(int *num1,int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
    printf("Value of a inside function is %d and b is %d \n",*num1,*num2);
}