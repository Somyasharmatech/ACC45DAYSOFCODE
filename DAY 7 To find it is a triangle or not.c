#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three angles");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
    {
        printf("it is a triange");
    }
    else
    {
        printf("no it is not a triangle");
    }
}
