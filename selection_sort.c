//Implementing selection sort algorithm to sort an array in ascending order
#include<stdio.h>
void selectionSort(int array[],int size);
int main(){
    int arr[]={23,43,23,7,3465,6,74,7,345,73,45,54,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("Existing array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    selectionSort(arr,n);
    printf("Array after implementing Bubble sort : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

//difining selection sort
void selectionSort(int array[],int size){
    for(int i=0;i<size-1;i++){ 
        int min_index=i;
        for(int j=i+1;j<size;j++){
            if(array[min_index]>array[j]){
                min_index=j;
            }
        }
        int temp=array[min_index];
        array[min_index]=array[i];
        array[i]=temp;
    }
}