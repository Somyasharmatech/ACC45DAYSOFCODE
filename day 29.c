#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,sum;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("sum of %d and %d is %d",a,b,sum);
    return 0;
}
        int add(int x,int y)
        {
    return x+y;
}