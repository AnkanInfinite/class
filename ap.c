//To check if an array can br rearranged in an arithmatic progression
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
//quicksort requires an comparision function
    int comp_int(const void *n1,const void *n2){
        int val1=*(const int*)n1;
        int val2=*(const int*)n2;
       return val1-val2;
    }
bool canMakeArithmeticProgression(int* arr, int arrSize) {
    //we can sort the array as an AP must be Absolutely increasing or decreasing
    
    qsort(arr,arrSize,sizeof(int),comp_int);
    int diff=arr[0]-arr[1];
    for(int i=0;i<arrSize-1;i++){
        if(arr[i]-arr[i+1] != diff)return false;
    }
    return true;
}

int main(){
    int n;
    printf("How many integers to enter : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    if(canMakeArithmeticProgression(arr,n)){
        printf("Array can be reorganised into an AP \n");
    }
    else{
        printf("Array cannot be reorganised into an AP \n ");
    }
    return 0;

}