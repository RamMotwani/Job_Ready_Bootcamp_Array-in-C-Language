#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("enter 10 no.s to calculate their average");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10;
    printf("average of 10 no.s is %f",avg);
    printf("\n");
    return 0;
}
