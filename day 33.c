
 //fibonacci series through funtion.
#include<stdio.h>
void fib(int);
int main()
{
    int a,f;
    printf("enter a number\n");
    scanf("%d",&a);
    fib(a);
    return 0;
}
void fib(int n){
    int x=0,y=1, temp,i;
    printf("%d\n",x);
    for (i=2;i<=n;i++){
       temp=x;
       x=y;
       y=temp+y;
       printf("%d\n",x);
    }
}