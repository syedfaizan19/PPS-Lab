#include<stdio.h>
int main()
{
                const int username=123;
                const int passWd=123;
                int user,pass;
                printf("entr the user id and password:");
                scanf("%d%d",&user,&pass);
                if(username==user && passWd==pass)
                {
                                printf("Access Granted");
                }
                else
                {
                                printf("Access Denied");
                }
                return 0;
}
