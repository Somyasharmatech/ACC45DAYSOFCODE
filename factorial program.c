#include<stdio.h>
void main()
{
    int i,fact=1,n;
    printf("enter the no.");
    scanf("%d",&n);
    for(i=n;i>1;i--)
    {
        fact=fact*n;
        n=n-1;
    }
    printf("%d",fact);
}