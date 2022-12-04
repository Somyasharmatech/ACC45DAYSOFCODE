//factorial by using function 
#include<stdio.h>
int fact(int);
int main()
{
    int x,f=0;
    printf("enter a value for factorial\n");
    scanf("%d",&x);
    f=fact(x);
    printf("factorial of %d is %d",x,f);
    return 0;
}
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
