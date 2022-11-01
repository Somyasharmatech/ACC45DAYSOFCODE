
#include <stdio.h>
void main()
{
    int a=0,b=1,c,n,i;
    printf("enter the limit");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);
    }
}
