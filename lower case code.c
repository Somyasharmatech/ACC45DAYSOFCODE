#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("lower case");
    }
    else if(ch>='A'&&ch<='Z')
    {
        printf("upper case");
    }
    else
    {
        printf("its a special character");
    }

}