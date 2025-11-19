/*
An airport keeps a record of passenger ticket numbers who have checked in.
when a passenger enters a ticket mumber, search whether the ticket exists 
or not.
*/
#include<stdio.h>
void check(int array[],int size);
int main(){
    int array[]={2,6,8,5,4,9,32};
    int n=sizeof(array)/sizeof(array[0]);
    check(array,n);
    return 0;
}

//defining function
void check(int array[],int size){
    int num,found=0;
    printf("Enter ticket number to check :");
    scanf("%d",&num);
    for(int i=0;i<size;i++){
        if(array[i]==num){
            found=1;
            break;
        }
    }
    if(found){
        printf("Ticket Exists \n");
    }
    else{
        printf("Ticket does not exist \n");
    }
}