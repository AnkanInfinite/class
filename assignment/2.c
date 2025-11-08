/*
 Write two separate functions using call by value and call by reference to 
increase its argument by 10.
*/
#include<stdio.h>
int incrementByValue(int num);
int incrementByReference(int *num);
int main(){
    int n;
    printf("Enter number to increment by 10 : \n");
    scanf("%d",&n);
    printf("Value originally stored in n : %d \n",n);
    printf("Value returned after incrementing by call by value is %d \n",incrementByValue(n));
    printf("Value stored in n after call by value increment through function : %d \n",n);
    printf("\n \n Value returned after incrementing by call by reference is %d \n ",incrementByReference(&n));
    printf("Value stored in n after call by reference increment through function : %d \n",n);
    return 0;
}

//Defining the functions
int incrementByValue(int num){
    num+=10;
    return num;
}

int incrementByReference(int *num){
    *num=(*num)+10;
    return *num;
}