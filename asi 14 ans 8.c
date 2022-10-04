#include<stdio.h>
int main()
{
    int a[10],i,smallest,secondSmallest;
    printf("enter an array to find the second smallest value in it");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    for(i=0;i<=9;i++)
    {
        if(smallest>a[i])
        {
            smallest=a[i];
            a[i]=a[0];
            a[0]=smallest;
        }
    }
    secondSmallest=a[1];
    for(i=1;i<=9;i++)
    {
        if(secondSmallest>a[i])
        {
            secondSmallest=a[i];
        }
    }
    printf("second smallest no in an array is %d",secondSmallest);
    return 0;
}
