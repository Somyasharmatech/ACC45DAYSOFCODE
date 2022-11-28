#include<stdio.h>
void swap(int*,int*);
main()
{
    int a,b;
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    printf("value of a=%d and b=%d before function calling\n",a,b);
    swap(&a,&b);
    printf("values of a=%d and b=%d before function calling\n",a,b);

}
void swap(int *p,int *q)
{
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("value of a=%d and b=%d inside the function\n",*p,*q);
}