/*
Write a program with a function to delete an element from any valid 
position in the array.  
*/
#include<stdio.h>
int del(int array[],int *length);
int main(){
    int n;
    printf("Enter number of integers to enter : \n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter number %d :",i+1);
        scanf("%d",&arr[i]);  
    }
    int found=del(arr,&n);
    if(found){
        printf("New array after deletion \n");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        printf("Element to be deleted not found ");
    }
    return 0;
}

//function definition
int del(int array[],int *length){
    int key;
    printf("Enter which element to delete :");
    scanf("%d",&key);
    int found =0;
    for(int i=0;i<*length;i++){
        if(key==array[i]){
            for(int j=i;j<*length-1;j++){
                array[j]=array[j+1];
            }
            (*length)--;
            found=1;
        }
    }
    return found;
}
