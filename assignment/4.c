/*
Create an array of integer pointers to store addresses of elements from an 
integer array.
*/
#include<stdio.h>
int main(){
    int arr[]={45,1,2,54,4,54,64};
    int length=sizeof(arr)/sizeof(arr[0]); //Stores the number of elements in the array
    int *arrPointers[length];
    for(int i=0;i<length;i++){
        arrPointers[i]=&arr[i];
    }
    printf("Pointer value for each element of the integer array are as follows \n");
    for(int i=0;i<length;i++){
        printf("The pointer value of element %d of the array is %p \n",i,arrPointers[i]);
    }

    return 0;
}