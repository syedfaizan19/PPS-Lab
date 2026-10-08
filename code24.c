#include <stdio.h>
int main()

{
 int isprime =1;
 for(int j = 2;j<3;j++)
 {
        if (3 % j==0)
        isprime=0;
        break;
 }
 if (isprime ==1)
    printf("is prime");
    else
    printf("is not prime");


}
