#include<stdio.h>
void main()
{
    char ch;
    printf("enter an alphabet");
    scanf("%c",&ch);
    if(ch>='A'&&'Z')
    {
        ch+=32;
    }
    switch(ch)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':

        printf("char is a vowel");
        break;

        default:
        printf("char is a consonant");
    }
}