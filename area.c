#include <stdio.h>
int main() {
    float d,r,a;
    printf("enter diameter of circle");
    scanf("%f", &d);
    r= d/2;
    a=3.14*r*r;
    printf("area of circle is %f",a);
    return 0;
}