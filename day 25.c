#include<stdio.h>
void main ()
{
int a,b;
printf("enter the value of th team A  \n");
scanf("%d",&a);
printf("enter the second team value\n  ");
scanf(" %d",&b);
if(a>b)
printf(" A team is winning\n");
else if (a<b)
printf(" B team is winning \n");
if(a==b) {printf("both team have equal score;so it's a draw\n");
}
}