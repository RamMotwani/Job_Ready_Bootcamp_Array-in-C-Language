#include<stdio.h>
int main()
{
    int a[10],i,min;
    printf("enter a 10 size array to find minimum value in it");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<=9;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("minimum value in array is %d",min);
    return 0;
}
