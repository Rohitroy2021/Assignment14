//Write a program to calculate the sum of all even numbers and sum of all odd
//numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10];
    int Evensum=0;
    int Oddsum=0;
    printf("Enter 10 number ");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            Evensum=Evensum+a[i];
        }
        else if(a[i]%2!=0)
        {
            Oddsum=Oddsum+a[i];
        }
    }

    printf("sum of even number  is %d\n",Evensum);
    printf("sum of odd number is %d\n",Oddsum);
    return 0;
}
