#include<stdio.h>
#define SIZE 10
void displayarray(int *,int);
int main()
{
    int arr[SIZE],i;
    printf("enter %d number\n",SIZE);
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&arr[i]);
    }
    displayarray(arr,SIZE);
    return 0;
}
/// @brief 
/// @param p 
/// @param x 
void dispalyarray(int *p,int x)
{
    int i=0;
    for(i=0;i<x;i++)
    {
        printf("value at index %d is %d\n",i,*p);
    }
}