#include<stdio.h>
int main()
{
    int g;

    printf("enter the grade");
    scanf("%d",&g);

    if(g>=80)
    {
        printf("A+");
    }
    else if(g>=75)
    {
        printf("A");
    }
    else if(g>=60)
    {
        printf("B");
    }
    else if(g>=45)
    {
        printf("C");
    }
    else if(g>=35)
    {
        printf("D");
    }
    else if(g<35)
    {
        printf("fail");
    }
}
