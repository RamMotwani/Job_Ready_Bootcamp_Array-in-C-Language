#include<stdio.h>
int main()
{
    int a[10],b[10],i;
    printf("enter 10 values of array to copy it on another array");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    for(i=0;i<=9;i++)
    {
        printf("%d",b[i]);
    }
    return 0;

}
