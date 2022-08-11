//Write a program to find the greatest number stored in an array of size 10. Take array
//values from the user.
#include<stdio.h>
int main()
{
    int max=-1;
    int a[10]={24,66,78,13,56,94,1,65,90,34};
    for(int i=0;i<10;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    printf("Greatest number is %d",max);
}
