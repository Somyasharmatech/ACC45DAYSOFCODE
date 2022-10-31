#include<stdio.h>
int main()
{
    int row,col,n;
    printf("enter the number");
    scanf("%d",&n);
    row=col=1;
    while(row<=n)
    {
        col=1;
        while(col<=n)
        {
            printf("%d",col);
            col++;
        }
        printf("\n");
        row++;
    }
    
}