#include<stdio.h>
#define SIZE 5
void main()
{
    int arr[SIZE],i,j,temp;
    printf("enter %d values\n",SIZE);
    for(i=0;i<=SIZE-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<SIZE-1;i++)
    {
        for(j=i+1;j<=SIZE-1;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("answer is%d\n",arr[i]);
}