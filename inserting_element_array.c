//To Insert element inside an array
#include<stdio.h>
void insert_array(int array[],int element, int position,int *elements_stored);
int main(){
    int arr[70]={1,2,3,4,5,6,7,8,9,10};
    int n=10; //Number of elements actually stored in array
    int *nptr=&n; //pointer to n
    int pos,element;
    printf("Enter element to insert : \n");
    scanf("%d",&element);
    printf("Enter on Which Position to insert %d : \n",element);
    scanf("%d",&pos);
    insert_array(arr,element,pos,nptr);
    printf("New array after insertion \n");
    for (int i = 0; i < *nptr; i++)
    {
       printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}

void insert_array(int array[],int element, int position,int *elements_stored){
    if(position>1 && position<=*elements_stored){
    for(int i=*elements_stored-1;i>=*elements_stored-position-1;i--){
        array[i+1]=array[i];
    }
    array[position-1]=element;
    }
    else{
        array[*elements_stored-1]=element;
    }
    (*elements_stored)++;
}
