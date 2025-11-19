/*
An online shopping site stores product prices in ascending order.
Write a program to find if any product with that exact price exists in the list.
*/
#include<stdio.h>
void check(float array[],int size);
int main(){
    float arr[]={1.0,23.0,24.0,59.9,99.0,199.99,200.0};
    int n=sizeof(arr)/sizeof(arr[0]);
    check(arr,n);
    return 0;
}

//since we have a sorted array we use binary search
void check(float array[],int size){
    int low=0;
    int high=size-1;
    float key;
    int found=0;
    printf("Enter which price to check :");
    scanf("%f",&key);

    while(low<=high){
        int mid=low + (high-low)/2;
        if(array[mid]==key){
            found=1;
            break;
        }
        else if(key>array[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(found){
        printf("Product of entered price is present \n");
    }
    else{
        printf("Product of entered price is not present \n");        
    }

    
}