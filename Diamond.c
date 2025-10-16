//This program prints a diamond pattern using stars
#define Rows 9 
#include<stdio.h>
int main(){
    int i,j,k;
    for(i=0;i<=Rows/2;i++){
        for(j=Rows-2*i;j>1;j--){
            printf(" ");
        }
        for(k=0;k<=2*i;k++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<=Rows/2;i++){
        for(j=0;j<2*i;j++){
            printf(" ");
        }
        for(k=Rows-2*i;k>0;k--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

