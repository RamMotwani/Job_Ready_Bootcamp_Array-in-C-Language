#include<stdio.h>
int main()
{
    int a[10],i,largest,secondLargest;
    printf("Enter an array to find 2nd largest value in");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=0;i<=9;i++)
    {
        if(largest<a[i])
        {
            largest=a[i];
            a[i]=a[0];
            a[0]=largest;
        }
    }
    secondLargest=a[1];
    for(i=1;i<=9;i++)
    {
        if(secondLargest<a[i])
        {
            secondLargest=a[i];
        }
    }
    printf("second largest value of an array is %d",secondLargest);
    return 0;
}
