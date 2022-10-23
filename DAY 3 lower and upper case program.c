#include<stdio.h>
void main()
{
    char ch;
    printf("enter the character");
    scanf("%ch",&ch);
    if(ch>='a'&&ch<='z');
    {
        printf("lower case");
    }
    else if(ch>='A'&&ch<'z')
    {
        printf("upper case");
        
    }
    else
    {
        printf("it is a special character...");
    }

    
}

