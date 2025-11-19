/*
A city records its temperature for 7 days. Write a program to store these temperatures
and find: Average temperature of the week and Highest and lowest temperature
*/
#include<stdio.h>
float avg(float array[],int size);
float highest(float array[],int size);
float lowest(float array[],int size);
int main(){
    int n=7;
    float array[n];
    for(int i=0;i<n;i++ ){
        printf("Enter temperature of Day %d :",i+1);
        scanf("%f",&array[i]);
    }
    printf("The average temperature is %.2f \n",avg(array,n));
    printf("The highest temperature is %.2f \n",highest(array,n));
    printf("The lowest temperature is %.2f \n",lowest(array,n));
    return 0;
}

//defining functions
float avg(float array[],int size){
    float sum=0;
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    return sum/size;
}
float highest(float array[],int size){
    float high=array[0];
    for(int i=1;i<size;i++){
        if(high<array[i]){
            high=array[i];
        }
    }
    return high;
}
float lowest(float array[],int size){
    float low=array[0];
    for(int i=1;i<size;i++){
        if(low>array[i]){
            low=array[i];
        }
        
    }
    return low;
}