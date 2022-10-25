#include<stdio.h>
void main()
{
    int c=0,a,b;
    char ch;

    printf("+ addition");
    printf("- substraction");
    printf("* multiplication");
    printf("/ division");

    printf("enter the choice");
    scanf("%c",&ch);

    printf("enter two number");
    scanf("%d%d",&a,&b);

    switch(ch)
    {
        case'+':
        c=a+b;
        break;

        case'-':
        c=a-b;
        break;

        case'*':
        c=a*b;
        break;

        case'/':
        c=a/b;
        break;

        default:
        printf("invalid number");
  }
  printf("output is %d",c);
}
