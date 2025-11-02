//Reversing a array
#include<stdio.h>
void rev_array(int array[],int length);
int main(){
    int n,i;
    printf("Enter Number of elements to enter in array  :\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter element %d : \n",i+1);
        scanf("%d",&arr[i]);
    }
    rev_array(arr,n);
    printf("Array After reversing");
    for(i=0;i<n;i++){
        printf(" %d,",arr[i]);
    }


}

void rev_array( int array[],int length){
    int temp;
    for(int i=0;i<length/2;i++){
        temp=array[i];
        array[i]=array[length-1-i];
        array[length-i-1]=temp;
    }
}
