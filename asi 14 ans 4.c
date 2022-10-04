#include<stdio.h>
int main()
{
    int a[10],i,max;
    printf("enter a 10 no.s array to find the maximum no in it");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<=9;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    printf("maximum value in array is %d",max);
    return 0;
}
