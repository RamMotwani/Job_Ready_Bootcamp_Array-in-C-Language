#include<stdio.h>
int main ()
{
    int a[10],i,j,x;
    printf("enter an array for sorting its element");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(a[i]>a[j])
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
        printf("%d",a[i]);

    }
    return 0;
}
