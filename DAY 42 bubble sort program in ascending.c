//bubble sort program 
#include<stdio.h>
#define SIZE 10
int main()
{
    int arr[SIZE],i,j;
    printf("enter %d elements \n",SIZE);
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("sorted array in ascending order");
    for(i=0;i<SIZE-1;i++)
    {
        for(j=1;j<SIZE-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j]=arr[j]+arr[j+1];
                arr[j]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
        }
        for(i=0;i<SIZE;i++)
        {
            printf("%d",arr[i]);
        }}