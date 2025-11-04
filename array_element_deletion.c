//Take n emements from user and which position element to delete
/*
let n[]={1,2,3,4,5,6,7,8}
postion to delete= 3
new arry n={1,2,4,5,6,7,8}
*/
#include<stdio.h>
int main(){
    int n,i,pos;
    printf("Enter Number of elements to input : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("\nEnter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter Which element to delete :");
    scanf("%d",&pos);
    if(pos>=0 && pos<=n){
        for(i=pos-1;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        printf("Array after deletion of %d element \n",pos);
        for(i=0;i<n-1;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        printf("Please Enter a Valid Positon");
    }
    return 0;
}

