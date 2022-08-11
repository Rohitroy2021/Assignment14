//Write a program to sort elements of an array of size 10. Take array values from the
//user.
#include<stdio.h>
int main()
{
    int a[10]={21,54,75,2,36};
    int temp;
    //printf("Enter a number ");
    //for(int i=0;i<5;i++)
    //scanf("%d",&a[i]);
    for(int i=0;i<4;i++)
    {
        for(int j=i+1;i<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
    printf(" %d ",a[i]);
    }
    return 0;

    }
