#include<stdio.h>
int main()
{
        int i,op1,bill=0,op2;
        while(1)
        {
l:
b:
                printf("1)breakfast menu\n");
                printf("2)tea & coffe\n");
                printf("3)payment\n");
                printf("4)Exit\n");
                printf("enter the option:\n");
                scanf("%d",&i);

                if(i>4)
                {
                        printf("unknown option\n");
                        goto b;
                }

                switch(i)
                {
                        case 1 : m:
                                 printf("1)idly:40\n");
                                 printf("2)dosa:45\n");
                                 printf("3)puri:35\n");
                                 printf("4)upma:35\n");
                                 printf("5)pongal:30\n");
                                 printf("6)back\n");
                                 printf("enter a sub option\n");
                                 scanf("%d",&op1);

                                 switch(op1)
                                 {
                                         case 1 : printf("enter a quantity\n");
                                                  scanf("%d",&op1);
                                                  printf("total price=%d\n",bill=bill+op1*40);
                                                  break;

                                         case 2: printf("enter a quantity\n");
                                                 scanf("%d",&op1);
                                                 printf("total price=%d\n",bill=bill+op1*45);
                                                 break;

                                         case 3: printf("enter a quantity\n");
                                                 scanf("%d",&op1);
                                                 printf("total price=%d\n",bill=bill+op1*35);
                                                 break;

                                         case 4: printf("enter a quantity\n");
                                                 scanf("%d",&op1);
                                                 printf("total price=%d\n",bill=bill+op1*35);
                                                 break;

                                         case 5: printf("enter a quantity\n");
                                                 scanf("%d",&op1);
                                                 printf("total price=%d\n",bill=bill+op1*30);
                                                 break;

                                         case 6 : printf("back\n");
                                                  break;

                                         default:{
                                                         printf("wrong option\n");
                                                         goto m;
                                                 }
                                 }
                                 goto l;
                                 break;

                        case 2: n:
                                printf("1)tea:20\n");
                                printf("2)coffe:25\n");
                                printf("3)milk:30\n");
                                printf("4)back\n");
                                printf("enter the sub option\n");
                                scanf("%d",&op1);

                                switch(op1)
                                {
                                        case 1: printf("enter qunatity\n");
                                                scanf("%d",&op1);
                                                printf("total price= %d\n",bill=bill+op1*20);
                                                break;

                                        case 2: printf("enter quantity\n");
                                                scanf("%d",&op1);
                                                printf("total price=%d\n",bill=bill+op1*25);
                                                break;

                                        case 3: printf("enter quantity\n");
                                                scanf("%d",&op1);
                                                printf("total price=%d\n",bill=bill+op1*30);
                                                break;

                                        case 4: printf("back\n");
                                                break;

                                        default:{
                                                        printf("wrong option\n");
                                                        goto n;
                                                }
                                }
                                goto l;
                                break;

                        case 3: k:
                                printf("1)payment by cash\n");
                                printf("2)payment by UPI\n");
                                printf("3)payment by card\n");
                                printf("4)Back\n");
                                printf("enter the sub option\n");
                                scanf("%d",&op1);

                                switch(op1)
                                {
                                        case 1: printf("payment done by cash\n");
                                                printf("final bill= %d\n",bill);
                                                printf("visit again thanks\n");
                                                return 0;

                                        case 2: printf("payment done by UPI\n");
                                                printf("final bill= %d\n",bill);
                                                printf("visit again thanks\n");
                                                return 0;

                                        case 3: printf("payment done by card\n");
                                                printf("final bill=%d\n",bill);
                                                printf("visit again thanks\n");
                                                return 0;

                                        case 4: goto b;
                                }
                                break;

                        case 4: if(bill>0)
                                {
                                        goto k;
                                }
                                printf("exit\n");
                                printf("bye bye\n");
                                break;
                }
        }

        return 0;
}