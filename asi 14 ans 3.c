#include<stdio.h>
int main()
{
    int a[10],i,Seven=0,Sodd=0;
    printf("enter 10 even & odd no. to find their sum");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            Seven=Seven+a[i];
        }
        else
        {
            Sodd=Sodd+a[i];
        }
    }
    printf("sum of even no.s is %d\n",Seven);
    printf("sum of odd no.s is %d",Sodd);
    return 0;
}
