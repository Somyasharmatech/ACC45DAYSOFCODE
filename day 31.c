#include<stdio.h>
#include<string.h>
int main()
{
    char first[30]="",second[30]="",third[60]="";
    int i=0,j=0,len;
    printf("enter first length\n");
    gets(first);
    printf("enter second string\n");
    gets(second);
    for(i=0;first[i]!='\0';i++)
    {
        third[i]=first[i];
    }
    len=i;
    for(j=0;second[j]!='0';j++,i++)
    {
        third[len+j]=second[j];
    }
    third[i]='\0';
    printf("concatination of both string is %s",third);
}