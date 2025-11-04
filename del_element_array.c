//Delete element from array 
#include<stdio.h>
void del(int array[],int *size , int element);
int main(){
    int arr[]={4,5,7,1,2,33,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int key; //Store which element to delete
    printf("Initial Array : \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter which element to delete :\n");
    scanf("%d",&key);
    del(arr,&n,key);
    printf("Final Array : \n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}

void del(int array[],int *size , int element){
    int i=0;
    //Loop to find position of given element
    while(element != array[i]){
        i++;
        if(i==*size){
            printf("element %d NOT FOUND ! \n",element);
            return;
        }
    }
    for(int j=i;j<(*size)-1;j++){
        array[j]=array[j+1];
    }
    (*size)--;
}