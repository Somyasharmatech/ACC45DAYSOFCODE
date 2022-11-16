#include<stdio.h>
#include<string.h>
int main()
{
    char first[30]="",second[30]="";
    int i=0;
    printf("enter first string\n");
    gets(first);
    for(i=0;first[i]!='\0';i++)
    {
       second[i]=first[i];
    }
    second[i]='\0';
    printf("second string is %s",second);
}
