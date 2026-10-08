#include <stdio.h>
int main()
{
                float unit,bill;
                printf("enter the units consumed :");
                scanf("%f", &unit);
                if (unit <=100)
                                bill = unit * 1.50;
                else if (unit<=200)
                                bill = unit * 2.50;
                else if (unit<=300)
                                bill = unit * 4.00;
                else
                                bill = unit * 6.00;
                printf("electricity bill=Rs. %.2f\n",bill);
                return 0;
}
