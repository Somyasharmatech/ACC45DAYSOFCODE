#include<stdio.h>
int main() {
    int sal,asal,t;
    printf("enter salary");
    scanf("%ld", &sal);
    asal= sal*12;
    if(asal<=500000)
    {
        t=0;
    }
    else if(asal <=1000000)
    {
        t=(asal-500000)*0.1;
    }
    else if(asal <=1500000)
    {
        t=50000+((asal-1000000)*0.15);
    }
    else
    {
        t=125000+((asal-1500000)*0.20);
    }
    printf("tex is %ld",t);
    return 0;
}