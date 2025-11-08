//Implementing bubble sort algorithm to sort an array in ascending order
#include<stdio.h>
void bubbleSort(int array[],int size);
int main(){
    int arr[]={23,43,23,7,3465,6,74,7,345,73,45,54,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Existing array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    bubbleSort(arr,n);
    printf("Array after implementing Bubble sort : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;

}

//Defining Bubble sort
void bubbleSort(int array[],int size){
    for(int i=0;i<size-1;i++){
        int sorted=0;
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                sorted=1;
            }
        }
        //We break if the array is already sorted skipping unnecessay steps
        if(sorted==0){
            return;
        }
    }
}