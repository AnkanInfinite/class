//Finding gcd of two numbers using recursion(Euclidean Algorithm)
//Calculate GCD of two Numbers using recursive function
#include<stdio.h>
int gcd(int num1,int num2);
int main(){
    int num1=0;
    int num2=0;
    printf("Enter First number : ");
    scanf("%d",&num1);
    printf("Enter Second number : ");
    scanf("%d",&num2);
    printf("The GCD of %d and %d is %d",num1,num2,gcd(num1,num2));
    return 0;
}
int gcd(int num1,int num2){
    if(num2==0){
        return num1;
    }
    return gcd(num2,num1%num2);
}