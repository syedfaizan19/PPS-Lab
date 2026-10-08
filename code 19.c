#include <stdio.h>
int main()
{
                float amount,dr,d,fr;
                printf("enter purchase amount:");
                scanf("%f",&amount);
                if (amount<500)
                                dr=5;
                else if (amount<10000)
                                dr=10;
                else if (amount<20000)
                                dr=15;
                else
                                dr=20;
                d=amount*dr/100;
                fr=amount-d;
                printf("discount=%.2f",d);
                printf("\nfinal price=%.2f",fr);
                return 0;
}
