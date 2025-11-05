//Factorial of a Number Using Rcursive Function
#include<stdio.h>
int factorial(int num);
int main() {
	int n=0;
	printf("Enter Number to find factorial of : ");
	scanf("%d",&n);
	printf("The factorial of %d is %d",n,factorial(n));
	return 0;
}
int factorial(int num) {
	if(num==1 ) {
		return 1;
	}
	return num*factorial(num-1);
}