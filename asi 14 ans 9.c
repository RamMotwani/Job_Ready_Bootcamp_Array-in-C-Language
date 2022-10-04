#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the size of an array");
    scanf("%d",&n);
int a[n];
  printf("enter %d values in array",n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=n-1;i>=0;i--)
  {
      printf("%d",a[i]);
  }
  return 0;
}
