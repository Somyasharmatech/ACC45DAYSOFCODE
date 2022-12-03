//bubble sort program 
#include<stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE],i,*p;
    p=arr;
    printf("enter %d number\n",SIZE);
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",p);
        p++;
    }
    p=arr;
    for(i=0;i<SIZE;i++)
    {
        printf("value at index %d is %d\n",i,*p);
        p++;
    }
}
