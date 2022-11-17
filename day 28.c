#include<stdio.h>
#include<string.h>
int main()
{
    char first[30]="",second[30]="";
    int i=0,len;
    printf("enter string first\n");
    gets(first);
    printf("enter string second\n");
    gets(second);
    for(i=0;first[i]!='\0';i++);
    len=i;
    for(i=0;i<=len;i++)
    {
        if(first[i]>second[i])
        {
            printf("first is greater than second");
            break;
        }
        else if(first[i]<second[i])
        {
            printf("second is greater than first");
            break;
        }
    }
    if(first[i]=='\0')
    {
        printf("strings are identical");
    }
}