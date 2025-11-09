/*
An array int A[5] = {10, 20, 30, 40, 50}; is given. 
Without using array indexing, print the second, last, and middle elements 
using only pointer arithmetic. 
*/
#include<stdio.h>
int main(){
    int A[5] = {10, 20, 30, 40, 50};
    int length=5;//The number of elements in array
    int *ptr=A;//Stores address of 1st element of array
    printf("The Second element of the array is %d \n",*(ptr + 1));
    printf("The last element of the array is %d \n",*(ptr + length-1));
    printf("The middle element of the array is %d \n",*(ptr + (length/2)));
    return 0;
}