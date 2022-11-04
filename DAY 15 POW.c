#include<stdio.h>
void main()
{
    int a,b,i=1,pow=1;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    while(i<=b)
    {
        pow*=a;
        i++;
    }
    printf("\n %d to the power of %d is %d",a,b,pow);
}