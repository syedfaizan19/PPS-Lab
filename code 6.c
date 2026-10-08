#include <stdio.h>
int main()
{
    int l;
    int b;
    int c;
    int a;
    float d;
    printf("enter the first no: ");
    scanf("%d",&l);
    printf("enter the second no: ");
    scanf("%d",&b);
    printf("enter the third no: ");
    scanf("%d",&c);
    a=l+b+c;
    d=a/3;
    printf("the avg is :%f",d);
    return 0;
}
