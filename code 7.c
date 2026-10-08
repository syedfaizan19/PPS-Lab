#include <stdio.h>
int main()
{
    float l;
    float b;
    float c;
    float a;
    float d;
    printf("enter the principal: ");
    scanf("%f",&l);
    printf("enter the intrest rate: ");
    scanf("%f",&b);
    printf("enter the time in years: ");
    scanf("%f",&c);
    a=l*b*c;
    d=a/100;
    printf("the simple intrest is :%f",d);
    return 0;
}
