/*
Write a C program using a user-defined function [int countEven(int arr[], 
int n)] that counts how many even numbers exist in a given array.
*/
#include<stdio.h>
int countEven(int array[],int size);
int main(){
    int n;
    printf("Enter number of integrs to enter : \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter number %d :",i+1);
        scanf("%d",&arr[i]);  
    }
    printf("%d Even numbers exist in the given Array",countEven(arr,n));
    return 0;
}

//Defining the function
int countEven(int array[],int size){
    int count=0; //initializing number of even numbers as 0
    for(int i=0;i<size;i++){
        if(array[i]%2==0){
            count++;
        }
    }
    return count;
}