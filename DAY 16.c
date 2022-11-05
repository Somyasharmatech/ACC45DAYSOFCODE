#include<stdio.h>
#define SIZE 5
int main()
{
    long arr[SIZE]={0},i,g=0;
    printf("enter 10 element in array\n");
    for(i=0;i<=SIZE-1;i++)
    {
        scanf("%d",&arr[i]);
        if(g<arr[i])
        {
            g=arr[i];
        }
    }
    printf("greatest among 10 element is %d",g);

}