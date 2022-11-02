#include<stdio.h>
int main()
{
    int row,col,n;
    printf("enter the number for rows");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=n;col>=row;col--)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            if(col==1||col==2*row-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}