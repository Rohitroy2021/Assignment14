//Write a program in C to copy the elements of one array into another array.Take array
//values from the user.
#include<stdio.h>
int main()
{
    int b[10];
    int a[10];
    printf("Enter 10 number :");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    b[i]=a[i];
    for(int i=0;i<10;i++)
        //printf(" %d ",a[i]);
      //b[i]=a[i];
      printf(" %d ",b[i]);
}
