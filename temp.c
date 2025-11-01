// C program to dereference double pointer
#include <stdio.h>

int main()
{

    int var = 10;
    int* ptr = &var;
    // double pointer
    printf("address of var is %p and ptr address value stored is %p \n\n",&var,ptr);
    int** dptr = &ptr;
  printf("address value stored in dptr is %p \n\n",dptr);
  printf("dereferenced value stored in dptr is %p \n\n",*dptr);
    // dereferencing the double pointer
    printf("Accesing value from double pointer using "
           "**dptr: %d",
           **dptr);
    void *pt=&var;
    printf("size of void pointer pt is  %d \n\n",sizeof(pt));
    return 0;
}