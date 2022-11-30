

#include<stdio.h>
#define SIZE 10
void displayarray(int *,int);
int sumofarray(int *,int);
int main()
{
    int arr[SIZE],i,s=0;
    printf("enter %d number\n", SIZE);
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    displayarray(arr,SIZE);
    s=sumofarray(arr,SIZE);
    printf("sum of array elements is %d",s);
    return 0;
    }
    void displayarray(int *p,int x)
    {
        int i=0;
        for(i=0;i<x;i++)
        {
            printf("value at index %d is %d\n",i,*p);
            p++;
        }
 }
 int sumofarray(int *p,int x)
 {
     int i,sum=0;
     for(i=0;i<x;i++)
     {
         sum+=*p;
         p++;
     }
     return sum;
 }