
#include<stdio.h>
#define SIZE 5
int main()
{
    int arr1[SIZE],arr2[SIZE],arr3[SIZE],i;
    printf("enter %d numbers in the array 1\n",SIZE);
    for(i=0;i<=SIZE-1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter %d numbers in the array 2\n",SIZE);
    for(i=0;i<=SIZE-1;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<=SIZE-1;i++)
    {
        arr3[i]=arr1[i]+arr2[i];
        printf("sum of %d and %d is %d\n",arr1[i],arr2[i],arr3[i]);
    }
}
