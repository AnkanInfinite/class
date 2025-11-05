//Solving Tower of Hanoi
#include<stdio.h>
void hanoi(int disks,char source, char auxilary, char destination);
int main(){
    int n;
    printf("Enter number of disks to move :");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    return 0;
}


void hanoi(int disks,char source, char auxilary, char destination){
    if (disks==1){
        printf("Move disk 1 from %c to %c \n",source,destination);
        return;
    }
    hanoi(disks-1,source,destination,auxilary); //moving n-1 disks to auxilary
    printf("Move disk %d from %c to %c \n",disks,source,destination); //Now tower empty so we move biggest disk to destination
    hanoi(disks-1,auxilary,source,destination); //sending disks in auxilary to destination with help of source as auxilary

}