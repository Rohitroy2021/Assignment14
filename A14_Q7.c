//7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int temp;
    int a[10];
    printf("Enter a number :");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
        if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("second largest number is %d",a[8]);
}
