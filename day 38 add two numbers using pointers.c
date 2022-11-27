#include<stdio.h>
main()
{
    int a,b,sum;
    int *p=&a,*q;
    q=&b;
    printf("enter two number");
    scanf("%d%d",p,q);
    sum=*p+*q;
    printf("sum of %d and %d is %d\n",*p,*q,sum);
}