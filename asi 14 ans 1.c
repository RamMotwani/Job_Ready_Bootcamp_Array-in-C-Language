#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("enter 10 no.s to calculate their sum ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum of 10 no.s is %d",sum);
    printf("\n");
    return 0;
}
