#include<string.h>
void main()
{
    int i;
    char str[20];
    printf("enter a string");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A'&& str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    printf("str in lower case is %s",str);
}